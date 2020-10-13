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
    typedef struct {
   char mode1;
    uint8_t period1;
    uint8_t compare1;
    char mode2;
    uint8_t period2;
    uint8_t compare2;
    
}conf;
    
    void LED_BLINK (conf c);
#endif
/* [] END OF FILE */
