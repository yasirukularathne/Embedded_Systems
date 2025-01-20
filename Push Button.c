/*
 * LED Blink.c
 *
 * Created: 20-Jan-25 2:49:01 PM
 * Author : yasiru
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= 0B00100000;   //Set Port B 5th pin as an output
    DDRD &= 0B11110111;	  //PORTD : PIN 3 IS MADE OUT AS INPUT
	
	
    while (1) 
    {
		if (PIND & 0B0001000 ){
		
		PORTB |= 0B00100000;
		
		}
		else {
			
			PORTB &= 0B11011111;
				
		}   
    }
}