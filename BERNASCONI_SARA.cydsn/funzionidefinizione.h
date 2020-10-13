/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef __FUNZIONI_DEFINIZIONE_H
    #define __FUNZIONI_DEFINIZIONE_H
    #include "cytypes.h"
    #include "project.h"
    //Definisco una struttura  
    typedef struct {
    //mode1:che tipo di comparazione deve usare il PWM_RED
    char modeR;
    //period1:periodo di PWM_RED
    uint8_t periodR;
    //compare1: valore compare usato per PWM_RED
    uint8_t compareR;
    //mode2:che tipo di comparazione deve usare il PWM_GREEN
    char modeG;
    //periodo2:periodo di PWM_GREEN
    uint8_t periodG;
     //compare1: valore compare usato per PWM_RED
    uint8_t compareG;
    
}conf;
    //Definisco la funzione che svolge il settaggio delle due pwm
    void LED_BLINK (conf c);
#endif
/* [] END OF FILE */
