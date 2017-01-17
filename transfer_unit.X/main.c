// set to frequency measured on DEBUG pin:
#define DEBUG_HZ 13

#define PUMP_ON_TIMEOUT     10 S // min on
#define PUMP_MAX_ON         15 MIN
#define PUMP_OFF_TIMEOUT    20 S
#define BOOT_TIMEOUT        10 S

#define C35            350 // deciCelsius
#define C45            450 // deciCelsius
#define C3              30


// program logic:
/* rules:
 * rules 2017/01/09
 * 
* (t2 < 45C) AND (t4 >35C) AND (t1 > (t2 + n)) = start
* (t1 < (t2 + n)) AND t2 < (t3 + n) = stop

Stop + blokovani moznosti startu:

* t1 < 35C OR t1 < t2-3C OR t3 > 45C
*/


#define START_CONDITION() \
(\
   t2 < C45 \
&& t4 > C35 \
&& t1 > t2+trim \
)

#define BLOCK_CONDITION() \
(\
   t1 < C35 \
|| t1 < t2-C3 \
|| t3 > C45 \
)

#define STOP_CONDITION() \
(\
  t1 < t2+trim \
&& t2 < t3+trim \
)
  
  
#define VIRTCOND_SHIFT 3    

#define MODE_BITHERMOSTAT   0

#define BITHERMO_LOW_TEMP    700
#define BITHERMO_HIGH_TEMP   800
#define BITHERMO_HYST        20


#include "mcc_generated_files/mcc.h"
#include <stdio.h>

#define HZ (DEBUG_HZ*2)
#define S *HZ
#define MIN *60 S


struct conv_table
{
    uint16_t in;
    int16_t out;
};
#include "pt100_table.h"

uint16_t convert(struct conv_table *table, uint16_t value )
{
    if (value <= table->in) return table->out;
    while (1)
    {
        if (value <= table[1].in)
        {
            int32_t d_i=table[1].in-table[0].in;
            int32_t d_o=table[1].out-table[0].out;
            int32_t d_v=value-table[0].in;
            return table->out+d_v*d_o/d_i;
        }
        table++;
    }
    return 0xffff;
}

void putdec(uint16_t dec)
{
    char buf[5];
    char *ptr=buf;
    
    if (dec==0) *ptr++='0';
    while (dec)
    {
        *ptr++=dec%10+'0';
        dec/=10;
    }
    while (ptr>buf)
    {
        putch(*--ptr);
    }
}

void myputs(const char *ptr)
{
    while (*ptr) putchar(*ptr++);
}

const uint8_t adchans[]={T1,T2,T3,T4,TRIMMER};
#define CHANS (sizeof(adchans)/sizeof(*adchans))
uint16_t t[CHANS-1];
uint16_t trim;

#define t1 t[0]
#define t2 t[1]
#define t3 t[2]
#define t4 t[3]

uint16_t virt_cond[CHANS];
uint8_t i;
uint16_t timeout=BOOT_TIMEOUT;
uint16_t run_tout=0;
uint8_t button=0xff;
uint8_t running;

void main(void) 
{
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    
    
    for (i=0; i<CHANS; i++) virt_cond[i]=ADC_GetConversion(adchans[i]);
    while (1) 
    {
        CLRWDT();
        DEBUG_Toggle();
        
// read:        
        for (i=0; i<CHANS; i++) 
            virt_cond[i]+=((int16_t)(ADC_GetConversion(adchans[i])-virt_cond[i]))>>VIRTCOND_SHIFT;
        trim=(virt_cond[CHANS-1]/(65536/11))*10;
        for (i=0; i<CHANS-1; i++) 
            t[i]=convert(ad_to_temp, virt_cond[i]);
        
        running=PUMP_GetValue();
        myputs("t1: "); putdec(t1);
        myputs(" t2: "); putdec(t2);
        myputs(" t3: "); putdec(t3);
        myputs(" t4: "); putdec(t4);
        myputs(" trim: "); putdec(trim);
        if (running)
            myputs(" ON ");
        else
            myputs(" OFF");
        myputs(" tout: "); putdec(timeout);
        myputs(" run: "); putdec(run_tout);
        myputs("\r\n");
        
        if (MODE_GetValue()==MODE_BITHERMOSTAT)
        {
            uint16_t tt=t[0];
            if (PUMP_LAT==1) tt-=BITHERMO_HYST;
            PUMP_LAT=(tt>BITHERMO_HIGH_TEMP)?1:0;
            
            tt=t[0];
            if (LOW_TEMP_LAT==1) tt+=BITHERMO_HYST;
            LOW_TEMP_LAT=(tt<BITHERMO_LOW_TEMP)?1:0;
            
            continue;
        }
        
        
        if (timeout) timeout--;
        if (run_tout) run_tout--;
        
// block
        if (  BLOCK_CONDITION()
           || running && run_tout==0     
           )
        {
            PUMP_SetLow();
            timeout=PUMP_OFF_TIMEOUT;
            continue;
        }    
        button<<=1;
        button|=START_BUTTON_GetValue()==0?0:1;
#define BUTTON_PRESSED() ((button&0x07)==0x04)        
    // STOP CONDITION
        if ( running
           && ( BUTTON_PRESSED()
                ||
                (  timeout == 0
                && STOP_CONDITION()
                )  
              ) 
           )     
        {
            PUMP_SetLow();
            timeout=PUMP_OFF_TIMEOUT;
            continue;
        }    
        
    // START CONDITION    
        if (!running
           && ( BUTTON_PRESSED()
              ||  
              (  timeout == 0
              && START_CONDITION()
              )
             )   
           )
        {
            PUMP_SetHigh();
            timeout=PUMP_ON_TIMEOUT;
            run_tout=PUMP_MAX_ON;
            continue;
        }
      
    }
}
/**
 End of File
 */