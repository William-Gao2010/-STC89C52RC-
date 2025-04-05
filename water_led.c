#include <STC89C5xRC.H>
#include "intrins.h"

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;
sbit LED5 = P2^4;
sbit LED6 = P2^5;
sbit LED7 = P2^6;
sbit LED8 = P2^7;

void Delay100ms(int ms)	//@11.0592MHz
{
	while(ms--)
	{	
		unsigned char data i, j;

		i = 180;
		j = 73;
		do
		{
			while (--j);
		} while (--i);
	}
}


void main()
{
	while(1)
	{		
		LED1 = 1;
		Delay100ms(100);
		LED2 = 1;
		Delay100ms(100);
		LED3 = 1;
		Delay100ms(100);
		LED4 = 1;
		Delay100ms(100);
		LED5 = 1;
		Delay100ms(100);
		LED6 = 1;
		Delay100ms(100);
		LED7 = 1;
		Delay100ms(100);
		LED8 = 1;
		Delay100ms(100);
	}
}