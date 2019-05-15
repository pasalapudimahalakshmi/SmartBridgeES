
			
/*
 * pr4.c
 *
 * Created: 5/10/2019 10:54:28 AM
 * Author : MY
 */ 
# ifndef F_CPU
# define F_CPU 16000000UL 
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
   DDRC = 0XFF;
   DDRD = 0X00; 
    while (1) 
    { 
	if((PIND & (1<<PD0)) == 0)
	{
			PORTC = (1<<PC0);
			_delay_ms(100);
			PORTC = (1<<PC1);
			_delay_ms(100);
			PORTC = (1<<PC2);
			_delay_ms(100);
			PORTC = (1<<PC3);
			_delay_ms(100);
			PORTC = (1<<PC4);
			_delay_ms(100);
			PORTC = (1<<PC5);
			_delay_ms(100);
			PORTC = (1<<PC6);
			_delay_ms(100);
			PORTC = (1<<PC7);
			_delay_ms(100);
	}
	if((PIND & (1<<PD1)) == 0)
	{
		PORTC = (1<<PC7);
		_delay_ms(100);
		PORTC = (1<<PC6);
		_delay_ms(100);
		PORTC = (1<<PC5);
		_delay_ms(100);
		PORTC = (1<<PC4);
		_delay_ms(100);
		PORTC = (1<<PC3);
		_delay_ms(100);
		PORTC = (1<<PC2);
		_delay_ms(100);
		PORTC = (1<<PC1);
		_delay_ms(100);
		PORTC = (1<<PC0);
		_delay_ms(100);
	}
	}
}
