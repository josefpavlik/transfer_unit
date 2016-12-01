/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.0
        Device            :  PIC16F1704
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()    do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()   do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()   do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()         PORTAbits.RA0
#define RA0_SetDigitalInput()   do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()  do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()     do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()   do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode() do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()    do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()   do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()   do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()         PORTAbits.RA1
#define RA1_SetDigitalInput()   do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()  do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()     do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()   do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode() do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set START_BUTTON aliases
#define START_BUTTON_TRIS               TRISAbits.TRISA2
#define START_BUTTON_LAT                LATAbits.LATA2
#define START_BUTTON_PORT               PORTAbits.RA2
#define START_BUTTON_WPU                WPUAbits.WPUA2
#define START_BUTTON_OD                ODCONAbits.ODA2
#define START_BUTTON_ANS                ANSELAbits.ANSA2
#define START_BUTTON_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define START_BUTTON_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define START_BUTTON_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define START_BUTTON_GetValue()           PORTAbits.RA2
#define START_BUTTON_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define START_BUTTON_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define START_BUTTON_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define START_BUTTON_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define START_BUTTON_SetPushPull()    do { ODCONAbits.ODA2 = 1; } while(0)
#define START_BUTTON_SetOpenDrain()   do { ODCONAbits.ODA2 = 0; } while(0)
#define START_BUTTON_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define START_BUTTON_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set MODE aliases
#define MODE_PORT               PORTAbits.RA3
#define MODE_WPU                WPUAbits.WPUA3
#define MODE_GetValue()           PORTAbits.RA3
#define MODE_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define MODE_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)

// get/set TRIMMER aliases
#define TRIMMER_TRIS               TRISAbits.TRISA4
#define TRIMMER_LAT                LATAbits.LATA4
#define TRIMMER_PORT               PORTAbits.RA4
#define TRIMMER_WPU                WPUAbits.WPUA4
#define TRIMMER_OD                ODCONAbits.ODA4
#define TRIMMER_ANS                ANSELAbits.ANSA4
#define TRIMMER_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define TRIMMER_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define TRIMMER_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define TRIMMER_GetValue()           PORTAbits.RA4
#define TRIMMER_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define TRIMMER_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define TRIMMER_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define TRIMMER_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define TRIMMER_SetPushPull()    do { ODCONAbits.ODA4 = 1; } while(0)
#define TRIMMER_SetOpenDrain()   do { ODCONAbits.ODA4 = 0; } while(0)
#define TRIMMER_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define TRIMMER_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set PUMP aliases
#define PUMP_TRIS               TRISAbits.TRISA5
#define PUMP_LAT                LATAbits.LATA5
#define PUMP_PORT               PORTAbits.RA5
#define PUMP_WPU                WPUAbits.WPUA5
#define PUMP_OD                ODCONAbits.ODA5
#define PUMP_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define PUMP_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define PUMP_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define PUMP_GetValue()           PORTAbits.RA5
#define PUMP_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define PUMP_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define PUMP_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define PUMP_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define PUMP_SetPushPull()    do { ODCONAbits.ODA5 = 1; } while(0)
#define PUMP_SetOpenDrain()   do { ODCONAbits.ODA5 = 0; } while(0)

// get/set T1 aliases
#define T1_TRIS               TRISCbits.TRISC0
#define T1_LAT                LATCbits.LATC0
#define T1_PORT               PORTCbits.RC0
#define T1_WPU                WPUCbits.WPUC0
#define T1_OD                ODCONCbits.ODC0
#define T1_ANS                ANSELCbits.ANSC0
#define T1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define T1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define T1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define T1_GetValue()           PORTCbits.RC0
#define T1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define T1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define T1_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define T1_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define T1_SetPushPull()    do { ODCONCbits.ODC0 = 1; } while(0)
#define T1_SetOpenDrain()   do { ODCONCbits.ODC0 = 0; } while(0)
#define T1_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define T1_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set T2 aliases
#define T2_TRIS               TRISCbits.TRISC1
#define T2_LAT                LATCbits.LATC1
#define T2_PORT               PORTCbits.RC1
#define T2_WPU                WPUCbits.WPUC1
#define T2_OD                ODCONCbits.ODC1
#define T2_ANS                ANSELCbits.ANSC1
#define T2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define T2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define T2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define T2_GetValue()           PORTCbits.RC1
#define T2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define T2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define T2_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define T2_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define T2_SetPushPull()    do { ODCONCbits.ODC1 = 1; } while(0)
#define T2_SetOpenDrain()   do { ODCONCbits.ODC1 = 0; } while(0)
#define T2_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define T2_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set T3 aliases
#define T3_TRIS               TRISCbits.TRISC2
#define T3_LAT                LATCbits.LATC2
#define T3_PORT               PORTCbits.RC2
#define T3_WPU                WPUCbits.WPUC2
#define T3_OD                ODCONCbits.ODC2
#define T3_ANS                ANSELCbits.ANSC2
#define T3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define T3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define T3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define T3_GetValue()           PORTCbits.RC2
#define T3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define T3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define T3_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define T3_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define T3_SetPushPull()    do { ODCONCbits.ODC2 = 1; } while(0)
#define T3_SetOpenDrain()   do { ODCONCbits.ODC2 = 0; } while(0)
#define T3_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define T3_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set T4 aliases
#define T4_TRIS               TRISCbits.TRISC3
#define T4_LAT                LATCbits.LATC3
#define T4_PORT               PORTCbits.RC3
#define T4_WPU                WPUCbits.WPUC3
#define T4_OD                ODCONCbits.ODC3
#define T4_ANS                ANSELCbits.ANSC3
#define T4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define T4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define T4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define T4_GetValue()           PORTCbits.RC3
#define T4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define T4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define T4_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define T4_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define T4_SetPushPull()    do { ODCONCbits.ODC3 = 1; } while(0)
#define T4_SetOpenDrain()   do { ODCONCbits.ODC3 = 0; } while(0)
#define T4_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define T4_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set DEBUG aliases
#define DEBUG_TRIS               TRISCbits.TRISC4
#define DEBUG_LAT                LATCbits.LATC4
#define DEBUG_PORT               PORTCbits.RC4
#define DEBUG_WPU                WPUCbits.WPUC4
#define DEBUG_OD                ODCONCbits.ODC4
#define DEBUG_ANS                ANSELCbits.ANSC4
#define DEBUG_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define DEBUG_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define DEBUG_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define DEBUG_GetValue()           PORTCbits.RC4
#define DEBUG_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define DEBUG_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define DEBUG_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define DEBUG_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define DEBUG_SetPushPull()    do { ODCONCbits.ODC4 = 1; } while(0)
#define DEBUG_SetOpenDrain()   do { ODCONCbits.ODC4 = 0; } while(0)
#define DEBUG_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define DEBUG_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LOW_TEMP aliases
#define LOW_TEMP_TRIS               TRISCbits.TRISC5
#define LOW_TEMP_LAT                LATCbits.LATC5
#define LOW_TEMP_PORT               PORTCbits.RC5
#define LOW_TEMP_WPU                WPUCbits.WPUC5
#define LOW_TEMP_OD                ODCONCbits.ODC5
#define LOW_TEMP_ANS                ANSELCbits.ANSC5
#define LOW_TEMP_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LOW_TEMP_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LOW_TEMP_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LOW_TEMP_GetValue()           PORTCbits.RC5
#define LOW_TEMP_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LOW_TEMP_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LOW_TEMP_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define LOW_TEMP_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define LOW_TEMP_SetPushPull()    do { ODCONCbits.ODC5 = 1; } while(0)
#define LOW_TEMP_SetOpenDrain()   do { ODCONCbits.ODC5 = 0; } while(0)
#define LOW_TEMP_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define LOW_TEMP_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/