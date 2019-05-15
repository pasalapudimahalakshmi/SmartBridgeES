/*
 * motor switch.c
 *
 * Created: 15-May-19 3:26:37 PM
 * Author : admini
 */
  
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	/*set fast PWM mode with non inverted o/p*/
	TCCR0 = (1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB |= (1<<PB3);   /*set OCO pin as o/p*/
}


int main(void)
{
	PWM_init();
    while (1) 
    {
		if((PINC &(1<<PC0)==0)
		{
			OCR0=150; /*increase the LED light intensity*/
			_delay_ms(8);
    }
	if((PINA &(1<<PA0)==0)
	{
		OCR0 = 250; /*decrease the LED intensity*/
		_delay_ms(8);
	}
}

}

