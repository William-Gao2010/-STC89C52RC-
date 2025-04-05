#include <STC89C5xRC.H>
#include "intrins.h"

sbit LED1 = P2^0;

int time=0;

void Timer0_Init(void)		//1����@11.0592MHz
{
	AUXR |= 0x80;			//��ʱ��ʱ��1Tģʽ
	TMOD &= 0xF0;			//���ö�ʱ��ģʽ
	TL0 = 0xCD;				//���ö�ʱ��ʼֵ
	TH0 = 0xD4;				//���ö�ʱ��ʼֵ
	TF0 = 0;				//���TF0��־
	TR0 = 1;				//��ʱ��0��ʼ��ʱ
    EA = 1;
    TR0 =1;
}


void main()
{
    Timer0_Init();
    while(1)
    {
        LED1=1;
    }
}


void Timer0 () interrupt 1
{
    AUXR |= 0x80;			//��ʱ��ʱ��1Tģʽ
	TMOD &= 0xF0;			//���ö�ʱ��ģʽ
    
    time++;
    
    if(time%2)
    {
        LED1 = 0;
    }
}    


