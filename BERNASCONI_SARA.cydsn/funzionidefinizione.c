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



static void pwmmode1(char forma);
static void pwmmode2(char forma);
static void pwmperiodo1( uint8_t period);
static void pwmperiodo2( uint8_t period);
static void pwmcompare1(uint8_t compare);
static void pwmcompare2(uint8_t compare);


void LED_BLINK (conf c)
{   
    PWM_RED_WriteCounter(0);
    PWM_GREEN_WriteCounter(0);
    pwmmode1(c.mode1);
    pwmperiodo1(c.period1);
    //PWM_RED_WritePeriod(c.period1);
    pwmcompare1(c.compare1);
    //PWM_RED_WriteCompare(c.compare1);
    pwmmode2(c.mode2);
    pwmperiodo2(c.period2);
    //PWM_GREEN_WritePeriod(c.period2);
    pwmcompare2(c.compare2);
    //PWM_GREEN_WriteCompare(c.compare2);
}
//Definisco le tre funzioni contenute in write
void pwmmode1(char mode1)
{if (mode1=='G')
PWM_RED_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
else
PWM_RED_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);

}
 void pwmmode2(char mode2)
{if (mode2=='G')
PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__GREATER_THAN);
else
PWM_GREEN_SetCompareMode(PWM_RED__B_PWM__LESS_THAN);

}

 void pwmperiodo1( uint8_t period1)
{
    PWM_RED_WritePeriod(period1);
}
 void pwmperiodo2( uint8_t period2)
{
    PWM_GREEN_WritePeriod(period2);
}
 void pwmcompare1(uint8_t compare1)
{
    PWM_RED_WriteCompare(compare1);
}    

void pwmcompare2(uint8_t compare2)
{
    PWM_GREEN_WriteCompare(compare2);
}    

//cosi uguale per le altre 2
/* [] END OF FILE */
