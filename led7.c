/*
 * pr2.c
 *
 * Created: 5/10/2019 10:17:16 AM
 * Author : MY
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA = 0XFF;
	DDRB = 0XFF;
	DDRC = 0XFF;
	DDRD = 0XFF;
    while (1) 
    {
		PORTA = 1<< PA7;
		PORTB = 1<< PB7;
		PORTC = 1<< PC7;
		PORTD = 1<< PC7;
		_delay_ms(1000);
		PORTA = 0<< PA7;
		PORTB = 0<< PB7;
		PORTC = 0<< PC7;
		PORTD = 0<< PD7;
		
    }
}

