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

#include "InterruptRoutines.h"
#include "settings.h"
#include "funzionidefinizione.h"    
    CY_ISR(CUSTOM_LED_ISR)
    {
        if (n<7)
           n=n+1; 
           //Metti in atto la funz configurazione(conf)
        else
           n=0;
       LED_BLINK(aconf[n]);  
         //Metto in funzione la 1
        
        
        
     }   
/* [] END OF FILE */
