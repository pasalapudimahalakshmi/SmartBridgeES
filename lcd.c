/*
 * LCD1.c
 *
 * Created: 5/10/2019 2:46:02 PM
 * Author : MY
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
#define RS 7
#define E 5
void send_command(unsigned char );

void send_character(unsigned char);

int main(void)
{
	DDRC = 0XFF;
	DDRD = 0XFF;
	_delay_ms(50);
	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);
	
	
	send_character(0X48);
	send_character(0X49);
} 
void send_command (unsigned char command)
{
	PORTC = command;
	PORTD&= ~(1<<RS);
	PORTD|= (1<<E);
	_delay_ms(50);
	PORTD &= ~(1<<E);
	PORTC =0;
}
void send_character (unsigned char character)
{
	PORTC = character;
	PORTD|= (1<<RS);
	PORTD|= (1<<E);
	_delay_ms(50);
	PORTD&= ~(1<<E);
	PORTC =0;
}





