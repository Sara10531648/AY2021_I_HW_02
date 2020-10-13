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
    PWM_RED_Start();
    PWM_GREEN_Start();//faccio partire le due pwm, contenuto in rgbleddriver.c
    isr_1_StartEx(CUSTOM_LED_ISR);
    n=0;
    LED_BLINK(aconf[n]);
    for(;;)
  
    {
        /* Place your application code here. */
         
        
       
        //CONFIGURAZIONE 1
      
       /* PWM_RED_WritePeriod( 30000);
        PWM_GREEN_WritePeriod( 30000);
        PWM_RED_WriteCompare( 30000);
        PWM_GREEN_WriteCompare( 30000);
        CyDelay( 10000);
        //CONFIGURAZIONE 2
        PWM_RED_WritePeriod(15000);
        PWM_GREEN_WritePeriod(15000);
        PWM_RED_WriteCompare(15000);
        PWM_GREEN_WriteCompare(7500);
        CyDelay( 10000);*/
        
        //CONFIGURAZIONE 3
        /*
        PWM_RED_WritePeriod(15000);
        PWM_GREEN_WritePeriod(15000);
        
        PWM_RED_WriteCompare(7500);
        PWM_GREEN_WriteCompare(15000);
        //CyDelay( 10000);
        //CONFIGURAZIONE 4
         PWM_RED_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);
         PWM_RED_WritePeriod(15000);
         PWM_GREEN_WritePeriod(15000);
         PWM_RED_WriteCompare(7500);
         PWM_GREEN_WriteCompare(7500);
         CyDelay( 1000000);
      //CONFIGURAZIONE 5
       PWM_RED_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
       PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);
  
        PWM_RED_WritePeriod(7500);
         PWM_GREEN_WritePeriod(7500);
         PWM_RED_WriteCompare(3750);
         PWM_GREEN_WriteCompare(3750);
         CyDelay( 1000000);
           
        //CONFIGURAZIONE 6
         PWM_RED_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);
         PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);
         PWM_RED_WritePeriod(30000);
         PWM_GREEN_WritePeriod(30000);
         PWM_RED_WriteCompare(7500);
         PWM_GREEN_WriteCompare(15000);
         CyDelay( 100000);*/
        //CONFIGURAZIONE 7
        /*PWM_RED_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
        PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__LESS_THAN); 
        PWM_RED_WritePeriod(30000);
         PWM_GREEN_WritePeriod(15000);
         PWM_RED_WriteCompare(15000);
         PWM_GREEN_WriteCompare(7500);
         CyDelay( 1000000000);*/
        
        
        
        
    }
}


/* [] END OF FILE */
