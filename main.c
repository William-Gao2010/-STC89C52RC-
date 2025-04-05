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

void main()
{
	while(1)
	{
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		LED5 = 0;
		LED6 = 0;
		LED7 = 0;
		LED8 = 0;
		
		
		
//		P2=0x00;
	}
}