// set to frequency measured on DEBUG pin:
#define DEBUG_HZ 10

#define PUMP_ON_TIMEOUT     10 S
#define PUMP_OFF_TIMEOUT    20 S
#define BOOT_TIMEOUT        10 S

#define VIRTCOND_SHIFT 3    


#include "mcc_generated_files/mcc.h"
#include <stdio.h>

#define HZ (DEBUG_HZ*2)
#define S *HZ


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

    
    const uint8_t adchans[]={T1,T2,T3,TRIMMER};
#define CHANS (sizeof(adchans)/sizeof(*adchans))
    uint16_t virt_cond[CHANS];
    uint8_t i;
    uint8_t trim;
    uint8_t t[CHANS-1];
    uint16_t timeout=BOOT_TIMEOUT;
    
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
        
        puts("t1: "); putdec(t[0]);
        puts(" t2: "); putdec(t[1]);
        puts(" t3: "); putdec(t[2]);
        puts(" trim: "); putdec(trim);
        if (PUMP_GetValue())
            puts(" ON ");
        else
            puts(" OFF");
        puts(" tout: "); putdec(timeout);
        puts("\r\n");
        
        if (timeout)
        {
            timeout--;
            continue;
        }
        
// program logic:
/* rules:
> t1 < (t2 - n) = stop
> t1 > (t2 + n) = start
> t2 < (t3 - n) = stop
*/
        if (  t[0] < t[1]-trim
           || t[1] < t[2]-trim
           )
        {
            PUMP_SetLow();
            timeout=PUMP_OFF_TIMEOUT;
        }    
        if (  t[0] > t[1]+trim )
        {
            PUMP_SetHigh();
            timeout=PUMP_ON_TIMEOUT;
        }
      
    }
}
/**
 End of File
 */