/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1704
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
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

// get/set TX aliases
#define TX_TRIS               TRISA0
#define TX_LAT                LATA0
#define TX_PORT               RA0
#define TX_WPU                WPUA0
#define TX_ANS                ANSA0
#define TX_SetHigh()    do { LATA0 = 1; } while(0)
#define TX_SetLow()   do { LATA0 = 0; } while(0)
#define TX_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define TX_GetValue()         RA0
#define TX_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define TX_SetPullup()    do { WPUA0 = 1; } while(0)
#define TX_ResetPullup()   do { WPUA0 = 0; } while(0)
#define TX_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define TX_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set VREFPos aliases
#define VREFPos_TRIS               TRISA1
#define VREFPos_LAT                LATA1
#define VREFPos_PORT               RA1
#define VREFPos_WPU                WPUA1
#define VREFPos_ANS                ANSA1
#define VREFPos_SetHigh()    do { LATA1 = 1; } while(0)
#define VREFPos_SetLow()   do { LATA1 = 0; } while(0)
#define VREFPos_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define VREFPos_GetValue()         RA1
#define VREFPos_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define VREFPos_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define VREFPos_SetPullup()    do { WPUA1 = 1; } while(0)
#define VREFPos_ResetPullup()   do { WPUA1 = 0; } while(0)
#define VREFPos_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define VREFPos_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set START_BUTTON aliases
#define START_BUTTON_TRIS               TRISA2
#define START_BUTTON_LAT                LATA2
#define START_BUTTON_PORT               RA2
#define START_BUTTON_WPU                WPUA2
#define START_BUTTON_ANS                ANSA2
#define START_BUTTON_SetHigh()    do { LATA2 = 1; } while(0)
#define START_BUTTON_SetLow()   do { LATA2 = 0; } while(0)
#define START_BUTTON_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define START_BUTTON_GetValue()         RA2
#define START_BUTTON_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define START_BUTTON_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define START_BUTTON_SetPullup()    do { WPUA2 = 1; } while(0)
#define START_BUTTON_ResetPullup()   do { WPUA2 = 0; } while(0)
#define START_BUTTON_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define START_BUTTON_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define IO_RA3_PORT               RA3
#define IO_RA3_WPU                WPUA3
#define IO_RA3_GetValue()         RA3

#define IO_RA3_SetPullup()    do { WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()   do { WPUA3 = 0; } while(0)
// get/set TRIMMER aliases
#define TRIMMER_TRIS               TRISA4
#define TRIMMER_LAT                LATA4
#define TRIMMER_PORT               RA4
#define TRIMMER_WPU                WPUA4
#define TRIMMER_ANS                ANSA4
#define TRIMMER_SetHigh()    do { LATA4 = 1; } while(0)
#define TRIMMER_SetLow()   do { LATA4 = 0; } while(0)
#define TRIMMER_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define TRIMMER_GetValue()         RA4
#define TRIMMER_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define TRIMMER_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define TRIMMER_SetPullup()    do { WPUA4 = 1; } while(0)
#define TRIMMER_ResetPullup()   do { WPUA4 = 0; } while(0)
#define TRIMMER_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define TRIMMER_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set PUMP aliases
#define PUMP_TRIS               TRISA5
#define PUMP_LAT                LATA5
#define PUMP_PORT               RA5
#define PUMP_WPU                WPUA5
#define PUMP_SetHigh()    do { LATA5 = 1; } while(0)
#define PUMP_SetLow()   do { LATA5 = 0; } while(0)
#define PUMP_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define PUMP_GetValue()         RA5
#define PUMP_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define PUMP_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define PUMP_SetPullup()    do { WPUA5 = 1; } while(0)
#define PUMP_ResetPullup()   do { WPUA5 = 0; } while(0)
// get/set T1 aliases
#define T1_TRIS               TRISC0
#define T1_LAT                LATC0
#define T1_PORT               RC0
#define T1_WPU                WPUC0
#define T1_ANS                ANSC0
#define T1_SetHigh()    do { LATC0 = 1; } while(0)
#define T1_SetLow()   do { LATC0 = 0; } while(0)
#define T1_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define T1_GetValue()         RC0
#define T1_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define T1_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define T1_SetPullup()    do { WPUC0 = 1; } while(0)
#define T1_ResetPullup()   do { WPUC0 = 0; } while(0)
#define T1_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define T1_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set T2 aliases
#define T2_TRIS               TRISC1
#define T2_LAT                LATC1
#define T2_PORT               RC1
#define T2_WPU                WPUC1
#define T2_ANS                ANSC1
#define T2_SetHigh()    do { LATC1 = 1; } while(0)
#define T2_SetLow()   do { LATC1 = 0; } while(0)
#define T2_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define T2_GetValue()         RC1
#define T2_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define T2_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define T2_SetPullup()    do { WPUC1 = 1; } while(0)
#define T2_ResetPullup()   do { WPUC1 = 0; } while(0)
#define T2_SetAnalogMode()   do { ANSC1 = 1; } while(0)
#define T2_SetDigitalMode()   do { ANSC1 = 0; } while(0)
// get/set T3 aliases
#define T3_TRIS               TRISC2
#define T3_LAT                LATC2
#define T3_PORT               RC2
#define T3_WPU                WPUC2
#define T3_ANS                ANSC2
#define T3_SetHigh()    do { LATC2 = 1; } while(0)
#define T3_SetLow()   do { LATC2 = 0; } while(0)
#define T3_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define T3_GetValue()         RC2
#define T3_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define T3_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define T3_SetPullup()    do { WPUC2 = 1; } while(0)
#define T3_ResetPullup()   do { WPUC2 = 0; } while(0)
#define T3_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define T3_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set T4 aliases
#define T4_TRIS               TRISC3
#define T4_LAT                LATC3
#define T4_PORT               RC3
#define T4_WPU                WPUC3
#define T4_ANS                ANSC3
#define T4_SetHigh()    do { LATC3 = 1; } while(0)
#define T4_SetLow()   do { LATC3 = 0; } while(0)
#define T4_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define T4_GetValue()         RC3
#define T4_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define T4_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define T4_SetPullup()    do { WPUC3 = 1; } while(0)
#define T4_ResetPullup()   do { WPUC3 = 0; } while(0)
#define T4_SetAnalogMode()   do { ANSC3 = 1; } while(0)
#define T4_SetDigitalMode()   do { ANSC3 = 0; } while(0)
// get/set DEBUG aliases
#define DEBUG_TRIS               TRISC4
#define DEBUG_LAT                LATC4
#define DEBUG_PORT               RC4
#define DEBUG_WPU                WPUC4
#define DEBUG_ANS                ANSC4
#define DEBUG_SetHigh()    do { LATC4 = 1; } while(0)
#define DEBUG_SetLow()   do { LATC4 = 0; } while(0)
#define DEBUG_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define DEBUG_GetValue()         RC4
#define DEBUG_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define DEBUG_SetDigitalOutput()   do { TRISC4 = 0; } while(0)

#define DEBUG_SetPullup()    do { WPUC4 = 1; } while(0)
#define DEBUG_ResetPullup()   do { WPUC4 = 0; } while(0)
#define DEBUG_SetAnalogMode()   do { ANSC4 = 1; } while(0)
#define DEBUG_SetDigitalMode()   do { ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS               TRISC5
#define IO_RC5_LAT                LATC5
#define IO_RC5_PORT               RC5
#define IO_RC5_WPU                WPUC5
#define IO_RC5_ANS                ANSC5
#define IO_RC5_SetHigh()    do { LATC5 = 1; } while(0)
#define IO_RC5_SetLow()   do { LATC5 = 0; } while(0)
#define IO_RC5_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define IO_RC5_GetValue()         RC5
#define IO_RC5_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define IO_RC5_SetPullup()    do { WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()   do { WPUC5 = 0; } while(0)
#define IO_RC5_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()   do { ANSC5 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

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