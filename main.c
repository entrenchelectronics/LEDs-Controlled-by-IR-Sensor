/*
 * Created: 04-05-2024 13:32:49
 * Author : Entrench
 */ 

#include <avr/io.h>
int main(void)
{  
	DDRC=0b0000000; //Set PORTC as Input Port
	DDRB=0b00011110; //Set PB1,PB2,PB3 and PB4 as Output Pins
	int Sensor=0;
    while (1) 
    {
		Sensor=(PINC&0b0000001);    // Acquire Sensor status connected at PC0
		if(Sensor==0b0000001)
		{
			PORTB=0b00011110;
		}
		else
		{
			PORTB=0b00000000;
		}
    }
}

