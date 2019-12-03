/*
 * SprintDay4.c
 *
 * Created: 2019-12-03 1:35:26 PM
 *  Author: Abdo Sayed
 */ 
#include "led.h"
#include "softwareDelay.h"
#include "gpio.h"

int main(void)
{
	Led_Init(LED_0);
	Led_Init(LED_1);
	Led_Init(LED_2);
	Led_Init(LED_3);

	Led_Off(LED_0);
	Led_Off(LED_1);
	Led_Off(LED_2);
	Led_Off(LED_3);
	
    while(1)
    {
        //TODO:: Please write your application code 
		Led_On(LED_0);
		Led_On(LED_1);
		Led_On(LED_2);
		Led_On(LED_3);
		
		SwDelay_ms(2000);
		
		Led_Off(LED_0);
		Led_Off(LED_1);
		Led_Off(LED_2);
		Led_Off(LED_3);
		
		SwDelay_ms(2000);
    }
}