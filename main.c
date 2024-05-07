/*
 * IR_Sensor.c
 *
 * Created: 05-02-2024 16:52:30
 * Author : Adarsh Rawat
 */ 

#include<avr/io.h>

int main()
{
	
	DDRC=0b0000000;   // set PORTC as input port
	DDRB=0b00011110;  // PB1, PB2, PB3, PB4 as output port
	int ls=0, rs=0;   // define & initialize ls, rs integer as 0 to
	// acquire the left sensor status in ls and right sensor
	// status in rs
	
	while(1)          // create infinite loop
	{
		
		rs=(PINC&0b0000001);    // acquire only left sensor status connected at PC0
		ls=(PINC&0b0001000);    // acquire only right sensor status connected at PC3
		

		if((rs==0b0000001)&(ls==0b0001000)) // check sensor status for both sensor OFF
		{

			PORTB=0b00011110;  
				
		}
		else
		{
		   PORTB=0b00000000;
		}
		
}
}

