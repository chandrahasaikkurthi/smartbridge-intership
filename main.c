/*
 * GccApplication8.c
 *
 * Created: 5/14/2019 9:40:27 AM
 * Author : Hasa
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA=0XFF;
    while (1) 
    {
		PORTA=0b11111100;
		_delay_ms(1000);
		PORTA=0X0C;
		_delay_ms(1000);
		PORTA=0XDA;
		_delay_ms(1000);
		PORTA=0XF2;
		_delay_ms(1000);
		PORTA=0X66;
		_delay_ms(1000);
		PORTA=0XB6;
		_delay_ms(1000);
		PORTA=0XBE;
		_delay_ms(1000);
		PORTA=0XE0;
		_delay_ms(1000);
		PORTA=0XFE;
		_delay_ms(1000);
		PORTA=0XE6;
		_delay_ms(1000);
		PORTA=0XEE;
		_delay_ms(1000);
		PORTA=0X3E;
		_delay_ms(1000);
		PORTA=0X9C;
		_delay_ms(1000);
		PORTA=0X7A;
		_delay_ms(1000);
		PORTA=0X9E;
		_delay_ms(1000);
		PORTA=0X8F;
		_delay_ms(1000);
		PORTA=0XF6;
		_delay_ms(300);
		PORTA=0X2E;
		_delay_ms(300);
		PORTA=0X1C;
		_delay_ms(300);
    }
}

