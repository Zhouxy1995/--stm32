#include "led.h"
#include "delay.h"
#include "sys.h"
//ALIENTEK miniSTM32������ʵ��1
//�����ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾
 int main(void)
 {	
	delay_init();	    	 //��ʱ������ʼ��	  
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin_0); //LED0�����
		GPIO_SetBits(GPIOA,GPIO_Pin_1);//LED1�����
		delay_ms(300);
		GPIO_SetBits(GPIOA,GPIO_Pin_0);//LED0�����
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);//LED1�����
		delay_ms(300);
	}
 }

