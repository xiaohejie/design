#include "stm32f10x.h"
#include "delay.h"
#include "led.h"
// #include "usart1.h"
#include "usart2.h"
#include "timer.h"
#include "capture2.h"
#include "capture3re.h"
#include "var_space.h"
#include "dac.h"
#include "dma.h"
#include "pwm.h"

u8 SendBuff[10];

int main(void)
{
	NVIC_Configuration();				// �����ж����ȼ�����
	delay_init();
	SendBuff[0]='P';	//	����ͷ�ı�ʶ
	SendBuff[5]='Q';	//	����ͷ�ı�ʶ
	
	//��ʼ��оƬӲ��
	LED_Init();
 	TIM5_Int_Init(499,7200-1);	//��ʱ������ 7200��Ƶ 10kHz ��ʱ500��λ = 50ms
	TIM4_Int_Init(4999,72-1);	//��ʱ������ 72��Ƶ 1MHz ��ʱ5000��λ = 5ms
	TIM2_Cap_Init(0XFFFF,0);		//TIM2��72MhzƵ�ʼ���
	TIM3RE_Cap_Init(0XFFFF,0);		//TIM3��72MhzƵ�ʼ���
	uart2_init(115200);	 							//���ڳ�ʼ��Ϊ115200
 	Dac1_Init();		 	//DACͨ��1��ʼ�� //PA.4 ���
 	Dac2_Init();		 	//DACͨ��2��ʼ�� //PA.5 ���
	DMA_USART_Config(DMA1_Channel7,(u32)&USART2->DR,(u32)SendBuff,10);

	//��ʼ������Ӳ��
	Dac1_Set_Vol(0);
	Dac2_Set_Vol(0);
	
	//����PWM
	TIM1_PWM_Init(199,72-1); //����Ƶ��PWM Ƶ��=72000/(899+1)=80Khz
	TIM_SetCompare1(TIM1,100); //����ռ�ձ�
	
	
	while(1)
	{
		//����������ʾ
		LED0=0;
		LED1=1;
		delay_ms(500);
		LED0=1;
		LED1=0;
		delay_ms(500);
	}
	
}
