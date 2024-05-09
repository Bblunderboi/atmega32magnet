/*
 * Magnet2.c
 *
 * Created: 06/05/2024 14:26:04
 * Author : Alexander
 * test
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	GICR |= (1<<INT1);
	DDRB |= (1<<PB0);
	DDRD &= ~(1<<PD3);
	MCUCR |= (1<<ISC10);
	sei();
 
    while (1) 
    {
		
    }
}

ISR(INT1_vect){
	if (bit_is_set(PIND, 3))
	{
		PORTB |= 1<<PB0;
	}
	else
	{
		PORTB &= ~(1<<PB0);
	}
	
	
}
