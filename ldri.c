/*
 * LDR.c
 *
 * Created: 5/14/2019 11:59:19 AM
 * Author : MY
 */
#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <stdlib.h>

#define enable  5
#define registerselection 7
void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char*string_of_characters);
int main(void)
{
	DDRC = 0XFF;
	DDRA = 0X00;
	DDRD = 0XFF;
	_delay_ms(50);
	ADMUX |= (1<<REFS0);
	ADCSRA |=(1<<ADEN)|(1<<ADIF)|(1<<ADPS0);
	float i=0;
	char SHOWA[7];
	send_a_command(0X01);
	_delay_ms(50);
	send_a_command(0X38);
	_delay_ms(50);
	send_a_command(0b00001111);
	_delay_ms(50);
	ADCSRA |= (1<<ADSC);
	
	while (1)
	{
		i = ADC/204.8;
		send_a_string("NAVYA");
		send_a_command(0X80+0X40+0);
		send_a_string("intensity=");
		send_a_command(0X80+0X40+10);
		float LDR = ((i*10)/(5-i));
		
		dtostrf(LDR,4,1,SHOWA);
		send_a_string(SHOWA);
		send_a_string(" ");
		send_a_command(0X80+0);
	}
}
void send_a_command(unsigned char command)
{
	PORTC = command;
	PORTD &= ~(1<<registerselection);
	PORTD |= (1<<enable);
	_delay_ms(50);
	PORTD &= ~(1<<enable);
	PORTC = 0;
}
void send_a_character(unsigned char character)
{
	PORTC = character;
	PORTD |= (1<<registerselection);
	PORTD |= (1<<enable);
	_delay_ms(50);
	PORTD &= ~(1<<enable);
	PORTC = 0;
}
void send_a_string(char *string_of_characters)
{
	while(*string_of_characters>0)
	{
		send_a_character(*string_of_characters++);
	}
}