#include "capture3re.h"
#include "var_space.h"

//��ʱ��3ͨ��2���벶������
//devin:����ǵ��۵�ӳ�䷽�����ϸ�����Գ�Բе����
//TIM3_CH2 PC7(REMAP)

TIM_ICInitTypeDef  TIM3_ICInitStructure;

void TIM3RE_Cap_Init(u16 arr,u16 psc)
{	 
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
 	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);	//ʹ��TIM3ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC ,ENABLE); 	//ʹ��GPIOCʱ��
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO, ENABLE);  
	GPIO_PinRemapConfig(GPIO_FullRemap_TIM3, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_7;  //PC7 ���֮ǰ����  
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //PC7 ����  
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOC,GPIO_Pin_7);						 //PC7 ����
	
	//��ʼ����ʱ��3 TIM3	 
	TIM_TimeBaseStructure.TIM_Period = arr; //�趨�������Զ���װֵ 
	TIM_TimeBaseStructure.TIM_Prescaler =psc; 	//Ԥ��Ƶ��   
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
  
	//��ʼ��TIM3���벶�����
// 	TIM3_ICInitStructure.TIM_Channel = TIM_Channel_2; //CC1S=01 	ѡ������� IC1ӳ�䵽TI1��
// 	TIM3_ICInitStructure.TIM_ICPolarity = TIM_ICPolarity_Rising;	//�����ز���
// 	TIM3_ICInitStructure.TIM_ICSelection = TIM_ICSelection_DirectTI; //ӳ�䵽TI1��
// 	TIM3_ICInitStructure.TIM_ICPrescaler = TIM_ICPSC_DIV1;	 //���������Ƶ,����Ƶ 
// 	TIM3_ICInitStructure.TIM_ICFilter = 0x00;//IC1F=0000 ���������˲��� ���˲�
// 	//TIM_ICInit(TIM3, &TIM3_ICInitStructure);
// 	TIM_PWMIConfig(TIM3, &TIM3_ICInitStructure);                 //���ݲ�������TIM������Ϣ
	
//  	TIM_SelectInputTrigger(TIM3, TIM_TS_TI2FP2);//ѡ��IC2Ϊʼ�մ���Դ
//  	TIM_SelectSlaveMode(TIM3, TIM_SlaveMode_Reset);//TIM��ģʽ�������źŵ����������³�ʼ���������ʹ����Ĵ����ĸ����¼�
//  	TIM_SelectMasterSlaveMode(TIM2, TIM_MasterSlaveMode_Enable); //������ʱ���ı�������
	TIM_TIxExternalClockConfig(TIM3,TIM_TIxExternalCLK1Source_TI2,TIM_ICPolarity_Rising,0);
	TIM_SetCounter(TIM3, 0);   // ���������CNT
    TIM_Cmd(TIM3,ENABLE); 
	//�жϷ����ʼ��
	NVIC_InitStructure.NVIC_IRQChannel = TIM3_IRQn;  //TIM3�ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;  //��ռ���ȼ�1��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;  //�����ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ��� 
	
// 	TIM_ITConfig(TIM3,TIM_IT_CC2 ,ENABLE);//��������ж� ,����CC1IE�����ж�	
// 	
// 	TIM_Cmd(TIM3,ENABLE ); 	//ʹ�ܶ�ʱ��3
 
}

uint16_t  TIM3CH2_CAPTURE_CNT=0;	//��������������
uint16_t	TIM3CH2_CAPTURE_VAL;			//��ǰ���벶��ֵ
uint8_t TIM3CH2_CAPTURE_SAT=0; //��ǰ����״̬ 0Ϊ�ȴ������� 1Ϊ�ȴ��½���
 
//��ʱ��3�жϷ������	 
//void TIM3_IRQHandler(void)
//{ 
// 	//�ж��Ƿ�Ϊ�����ж�
// 	if (TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET) 
// 	{
// 		TIM3CH2_CAPTURE_CNT++;	//�����������
// 		TIM3CH2_CAPTURE_VAL=0XFFFF;
// 	}
// 	if (TIM_GetITStatus(TIM3, TIM_IT_CC2) != RESET) //�ж��Ƿ�Ϊ�����ж�
// 	{
// 		if(TIM3CH2_CAPTURE_SAT)
// 		{
// 			TIM3CH2_CAPTURE_SAT=0;
// 			TIM_OC2PolarityConfig(TIM3,TIM_ICPolarity_Rising); 	//CC2P=0 ����Ϊ�����ز���
// 			addTIM3Counter();	//�������,��Ƶ����
// 		}
// 		else
// 		{
// 			TIM3CH2_CAPTURE_SAT=1;
// 			TIM_OC2PolarityConfig(TIM3,TIM_ICPolarity_Falling);	//CC2P=1 ����Ϊ�½��ز���
// 		}
		
// 		TIM3CH1_CAPTURE_VAL= TIM_GetCapture2(TIM3);	//��ȡ��ǰ����ֵ
// 		setTIM3Period(TIM3CH2_CAPTURE_VAL + TIM3CH2_CAPTURE_CNT*65535);	//���²�������
// 		
// 		TIM3CH2_CAPTURE_CNT = 0; //�����¸������أ�ֹͣ����
// 		TIM3CH2_CAPTURE_VAL = 0XFFFF;	//�������׼���´β�׽����
// 		TIM_SetCounter(TIM3,0);
//	}
	
	//TIM_ClearITPendingBit(TIM3, TIM_IT_CC2|TIM_IT_Update); //����жϱ�־λ
	//if (TIM_GetITStatus(TIM3, TIM_IT_CC2) != RESET) //�ж��Ƿ�Ϊ�����ж�
	//{
		//addTIM3Counter();	//�������,��Ƶ����
	//	TIM_ClearITPendingBit(TIM3, TIM_IT_CC2); //����жϱ�־λ
//}
 
//}
