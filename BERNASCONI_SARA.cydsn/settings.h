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
//indice arrey
int n;
//definisco un arrey di strutture contenente le 7 configurazioni

static conf aconf[]=
{   //CONFIGURAZIONE1:Led_Rosso e Led_verde accesi per un periodo di 2s (pwm a 8-bit con fck=128Hz-->periodo=255).Pattern:Giallo
    {'G',255,255,'G',255,255},
    //CONFIGURAZIONE2:Led_Rosso sempre acceso e Led_verde acceso per metà periodo.Pattern:Giallo,Rosso
    {'G',255,255,'L',255,127},
    //CONFIGURAZIONE3:Led_Rosso acceso nella seconda metà di periodo,Led_Verde sempre acceso.Pattern:Verde,Giallo
    {'G',255,127,'G',255,255},
    //CONFIGURAZIONE4:Led_Rosso e Led_verde accesi in modo alternato con un periodo di 1s. Pattern:Rosso,Verde
    {'L',127,64,'G',127,64},
    //CONFIGURAZIONE5:Led_Rosso e Led_verde accesi in modo alternato con un periodo di 500ms. Pattern:Verde,Rosso
    {'G',64,32,'L',64,32},
    //CONFIGURAZIONE6:Led_Rosso acceso per 3/4 di periodo poi spento,Led_verde acceso per prima metà periodo.Pattern:Giallo,Rosso,Spento
    {'L',255,64,'L',255,127},
    //CONFIURAZIONE7:Led_Rosso acceso per seconda metà periodo(2s), Led_verde acceso prima metà periodo(1s).Pattern:Verde,Spento,Giallo,Rosso
    {'G',255,127,'L',127,64}
   
    
};

/* [] END OF FILE */
