#include "capture3.h"

//��ʱ��3ͨ��1���벶������
//TIM3_CH2 PA7

TIM_ICInitTypeDef  TIM3_ICInitStructure;

void TIM3_Cap_Init(u16 arr,u16 psc)
{	 
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
 	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);	//ʹ��TIM3ʱ��
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);  //ʹ��GPIOAʱ��
	
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_7;  //PA7 ���֮ǰ����  
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //PA7 ����  
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOA,GPIO_Pin_7);						 //PA7 ����
	
	//��ʼ����ʱ��3 TIM3	 
	TIM_TimeBaseStructure.TIM_Period = arr; //�趨�������Զ���װֵ 
	TIM_TimeBaseStructure.TIM_Prescaler =psc; 	//Ԥ��Ƶ��   
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
  
	//��ʼ��TIM3���벶�����
	TIM3_ICInitStructure.TIM_Channel = TIM_Channel_2; //CC1S=01 	ѡ������� IC1ӳ�䵽TI1��
	TIM3_ICInitStructure.TIM_ICPolarity = TIM_ICPolarity_Rising;	//�����ز���
	TIM3_ICInitStructure.TIM_ICSelection = TIM_ICSelection_DirectTI; //ӳ�䵽TI1��
	TIM3_ICInitStructure.TIM_ICPrescaler = TIM_ICPSC_DIV1;	 //���������Ƶ,����Ƶ 
	TIM3_ICInitStructure.TIM_ICFilter = 0x00;//IC1F=0000 ���������˲��� ���˲�
	TIM_ICInit(TIM3, &TIM3_ICInitStructure);
	
	//�жϷ����ʼ��
	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;  //TIM3�ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;  //��ռ���ȼ�1��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;  //�����ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ��� 
	
	TIM_ITConfig(TIM3,TIM_IT_Update|TIM_IT_CC1,ENABLE);//��������ж� ,����CC1IE�����ж�	
	
	TIM_Cmd(TIM3,ENABLE ); 	//ʹ�ܶ�ʱ��3
 
}

uint16_t  TIM3CH1_CAPTURE_CNT=0;	//��������������
uint16_t	TIM3CH1_CAPTURE_VAL;			//��ǰ���벶��ֵ
void setTIM3Frequency(uint32_t capcnt);
 
//��ʱ��3�жϷ������	 
void TIM3_IRQHandler(void)
{ 
	//�ж��Ƿ�Ϊ�����ж�
	if (TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET) 
	{
		TIM3CH1_CAPTURE_CNT++;	//�����������
		TIM3CH1_CAPTURE_VAL=0XFFFF;
	}
	
	//�ж��Ƿ�Ϊ�����ж�
	if (TIM_GetITStatus(TIM3, TIM_IT_CC1) != RESET) //�ж��Ƿ�Ϊ�����ж�
	{
		TIM3CH1_CAPTURE_VAL= TIM_GetCapture1(TIM3);	//��ȡ��ǰ����ֵ
		setTIM3Frequency(TIM3CH1_CAPTURE_VAL + TIM3CH1_CAPTURE_CNT*65535);	//���²���Ƶ��
		
		TIM3CH1_CAPTURE_CNT = 0; //�����¸������أ�ֹͣ����
		TIM3CH1_CAPTURE_VAL = 0;	//�������׼���´β�׽����
		TIM_SetCounter(TIM3,0);
	}
	
	TIM_ClearITPendingBit(TIM3, TIM_IT_CC1|TIM_IT_Update); //����жϱ�־λ
 
}
