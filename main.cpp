
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    
	DDRA = 0x01;
	PORTA = 0x00;
    while (1) 
    {
		PORTA = 0x01;
		_delay_ms(500);
		PORTA = 0x00;
		_delay_ms(500);
	}
}

