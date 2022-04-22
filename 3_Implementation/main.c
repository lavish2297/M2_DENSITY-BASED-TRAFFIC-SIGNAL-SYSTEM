/**
 * @file main.c
 * @author Sudhan
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "definition.h"
int main(void)
{
	DDRB = 0xff;
	DDRD = 0xff;
	DDRC = 0x00;
	
	PORTB = 0x00;
	PORTD = 0x00;
	
    while(1)
    {
		if((PINC&0x01) == 0x01)
		{
		PORTB |= (1<<G1);
		PORTB |= (1<<Y2);
		PORTD |= (1<<R3);
		PORTD |= (1<<R4);
		
		}
		else if((PINC&0x02) == 0x02)
		{
		PORTB |= (1<<R1);
		PORTB |= (1<<G2);
		PORTD |= (1<<Y3);
		PORTD |= (1<<R4);	
		
		}
		
		else if((PINC&0x04) == 0x04)
		{
		PORTB |= (1<<R1);
		PORTB |= (1<<R2);
		PORTD |= (1<<G3);
		PORTD |= (1<<Y4);
		
		}
		
		else if((PINC&0x08) == 0x08)
		{
		PORTB |= (1<<Y1);
		PORTB |= (1<<R2);
		PORTD |= (1<<R3);
		PORTD |= (1<<G4);
		
		}
		
		else
		{
			PORTB = 0x00;
		PORTD = 0x00;
			
		PORTB |= (1<<G1);
		PORTB |= (1<<Y2);
		PORTD |= (1<<R3);
		PORTD |= (1<<R4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		
		PORTB |= (1<<R1);
		PORTB |= (1<<G2);
		PORTD |= (1<<Y3);
		PORTD |= (1<<R4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		
		PORTB |= (1<<R1);
		PORTB |= (1<<R2);
		PORTD |= (1<<G3);
		PORTD |= (1<<Y4);
		_delay_ms(7000);
		
		PORTB = 0x00;
		PORTD = 0x00;
		PORTB |= (1<<Y1);
		PORTB |= (1<<R2);
		PORTD |= (1<<R3);
		PORTD |= (1<<G4);
		_delay_ms(7000);
		PORTB = 0x00;
		PORTD = 0x00;
		}		
    }
}