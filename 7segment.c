/*
 * 7SEGMENT.c
 *
 * Created: 5/14/2019 10:09:12 AM
 * Author : MY
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>



int  main(void)
{
	DDRA=0XFF;
    while (1) 
    {
		PORTA = 0b00111111;
		_delay_ms(1000);
		PORTA = 0b00000110;
		_delay_ms(1000);
		PORTA = 0b01011011;
		_delay_ms(1000);
		PORTA = 0b01001111;
		_delay_ms(1000);
		PORTA = 0b01100110;
		_delay_ms(1000);
		PORTA = 0b01101101;
		_delay_ms(1000);
		PORTA = 0b01111101;
		_delay_ms(1000);
		PORTA = 0b00000111;
		_delay_ms(1000);
		PORTA = 0b01111111;
		_delay_ms(1000);
		PORTA = 0b01100111;
		_delay_ms(1000);
		PORTA = 0b01110111;
		_delay_ms(1000);
		PORTA = 0b01111100;
		_delay_ms(1000);
		PORTA = 0b00111001;
		_delay_ms(1000);
		PORTA = 0b01011110;
		_delay_ms(1000);
		PORTA = 0b01111001;
		_delay_ms(1000);
		PORTA = 0b11110001;
		_delay_ms(1000); 
    }
}

