#include "led.h" 

//��ʼ��PE.2��PE.3Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��				  
//stm32f107 LED0:PE2 LED1:PE3 
void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE , ENABLE);	 //ʹ��PE �˿�ʱ��
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //LED0-->PE.2 �˿�����
 GPIO_Init(GPIOE, &GPIO_InitStructure);					 //�����趨������ʼ��GPIOE.2
 GPIO_SetBits(GPIOE,GPIO_Pin_2);						 //PE.2 �����

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;	    		 //LED1-->PE.3 �˿�����, �������
 GPIO_Init(GPIOE, &GPIO_InitStructure);	  				 //�����趨������ʼ��GPIOE.3
 GPIO_SetBits(GPIOE,GPIO_Pin_3); 						 //PE.3 ����� 
}
 
