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
#include "funzionidefinizione.h"
#include "settings.h"
#include "InterruptRoutines.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //Inizializzo pwm_red e pwm_green
    PWM_RED_Start();
    PWM_GREEN_Start();
    isr_1_StartEx(CUSTOM_LED_ISR);
    //indice arrey aconf è settato a 0 all'inizio: in questo modo la prima configurazione in cui si trova il led è la Configurazione1
    n=0;
    LED_BLINK(aconf[n]);
    for(;;)
  
    {
        /* Place your application code here. */

        
        
        
    }
}


/* [] END OF FILE */
