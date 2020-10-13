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
       //Se non sono nella configurazione 7 incremento indice arrey
        if (n<7)
           n=n+1; 
       //Se sono in configurazione 7 l'indice dell'arrey deve tornare alla configurazione 1    
        else
           n=0;
        //Chiamata alla funzione che premuto il pulsante mi fa passare in una nuova configurazione 
       LED_BLINK(aconf[n]);  
         
        
        
        
     }   
/* [] END OF FILE */
