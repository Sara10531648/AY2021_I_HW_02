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



static void pwmmodeR(char forma);
static void pwmmodeG(char forma);
static void pwmperiodoR( uint8_t period);
static void pwmperiodoG( uint8_t period);
static void pwmcompareR(uint8_t compare);
static void pwmcompareG(uint8_t compare);


void LED_BLINK (conf c)
{   //scrive 0 (counter value) sul counter register. Ottengo passagio preciso da una configurazione all'altra
    PWM_RED_WriteCounter(0);
    PWM_GREEN_WriteCounter(0);
    pwmmodeR(c.modeR);
    pwmperiodoR(c.periodR);
    pwmcompareR(c.compareR);
    pwmmodeG(c.modeG);
    pwmperiodoG(c.periodG);
    pwmcompareG(c.compareG);
}
//Definisco le tre funzioni contenute in write
void pwmmodeR(char modeR)
{if (modeR=='G')
//comparation mode:greater
PWM_RED_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
else
//comparation mode:less
PWM_RED_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);

}
 void pwmmodeG(char modeG)
{if (modeG=='G')
PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
else
PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);

}
//scrivo periodo della configurazione
 void pwmperiodoR( uint8_t periodR)
{
    PWM_RED_WritePeriod(periodR);
}
 void pwmperiodoG( uint8_t periodG)
{
    PWM_GREEN_WritePeriod(periodG);
}
 //scrivo valore di compare della configurazione
void pwmcompare1(uint8_t compareR)
{
    PWM_RED_WriteCompare(compareR);
}    

void pwmcompare2(uint8_t compareG)
{
    PWM_GREEN_WriteCompare(compareG);
}    

/* [] END OF FILE */
