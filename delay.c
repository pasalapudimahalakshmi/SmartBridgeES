/*
 * delay code.c
 *
 * Created: 15-May-19 10:31:46 AM
 * Author : admini
 */ 

#include <avr/io.h>
#define LED PB0

int main(void)
{
   uint8_t timerOverflowCount = 0;
   DDRB = 0Xff;   // configure PORTD as o/p
   TCNT0 = 0X00;
   TCCR0 = (1<<CS00)|(1<<CS02);
    while (1) 
    {
		while((TIFR & 0X01)==0);
		TCNT0 = 0X00;
		TIFR = 0X01;     //clear timer1 overflow flag
		timerOverflowCount++;
		if(timerOverflowCount >= 5)
		{
			PORTB^= (0X01 << LED);
			timerOverflowCount = 0;
			
		}
		
    }
}

