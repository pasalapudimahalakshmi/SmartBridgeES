/*
 * GccApplication2.c
 *
 * Created: 5/10/2019 1:58:00 PM
 * Author : MY
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#endif
                     


int main(void)
{ 
	DDRA = 0XFF;
    
    while (1) 
    {
		PORTA |= (1<<PA0);
		_delay_ms(100);
		PORTA |= (1<<PA2);
		_delay_ms(100);
		PORTA |= (1<<PA4);
		_delay_ms(100);
		PORTA |= (1<<PA6);
		_delay_ms(100);                                                                           
	}
}

