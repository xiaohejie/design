#include "capture2.h"
#include "var_space.h"

//��ʱ��2ͨ��1���벶������
//TIM2_CH2 PA1

TIM_ICInitTypeDef  TIM2_ICInitStructure;

void TIM2_Cap_Init(u16 arr,u16 psc)
{	 
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
 	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);	//ʹ��TIM2ʱ��
 	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);  //ʹ��GPIOCʱ��
	
	GPIO_InitStructure.GPIO_Pin  = GPIO_Pin_1;  //PA1 ���֮ǰ����  
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING; //PA1 ����  
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOA,GPIO_Pin_1);						 //PA1 ����
	
	//��ʼ����ʱ��2 TIM2	 
	TIM_TimeBaseStructure.TIM_Period = arr; //�趨�������Զ���װֵ 
	TIM_TimeBaseStructure.TIM_Prescaler =psc; 	//Ԥ��Ƶ��   
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ
  
	//��ʼ��TIM2���벶�����
	TIM2_ICInitStructure.TIM_Channel = TIM_Channel_2; //CC1S=01 	ѡ������� IC1ӳ�䵽TI1��
	TIM2_ICInitStructure.TIM_ICPolarity = TIM_ICPolarity_Rising;	//�����ز���
	TIM2_ICInitStructure.TIM_ICSelection = TIM_ICSelection_DirectTI; //ӳ�䵽TI1��
	TIM2_ICInitStructure.TIM_ICPrescaler = TIM_ICPSC_DIV1;	 //���������Ƶ,����Ƶ 
	TIM2_ICInitStructure.TIM_ICFilter = 0x09;//IC1F=0000 ���������˲��� ���˲�
	//TIM_ICInit(TIM2, &TIM2_ICInitStructure);
	TIM_PWMIConfig(TIM2, &TIM2_ICInitStructure);                 //���ݲ�������TIM������Ϣ
	
	TIM_SelectInputTrigger(TIM2, TIM_TS_TI2FP2);
	TIM_SelectSlaveMode(TIM2, TIM_SlaveMode_Reset);//TIM��ģʽ�������źŵ����������³�ʼ���������ʹ����Ĵ����ĸ����¼�
	//TIM_SelectMasterSlaveMode(TIM2, TIM_MasterSlaveMode_Enable); //������ʱ���ı�������
	
	//�жϷ����ʼ��
	NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;  //TIM2�ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 1;  //��ռ���ȼ�1��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;  //�����ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ��� 
	
	TIM_ITConfig(TIM2,TIM_IT_CC2|TIM_IT_Update ,ENABLE);//��������ж� ,����CC1IE�����ж�	
						 //����������
	//TIM_Cmd(TIM2, ENABLE);  //ʹ��TIMx����
	TIM_Cmd(TIM2,ENABLE ); 	//ʹ�ܶ�ʱ��2
 
}

uint16_t  TIM2CH2_CAPTURE_CNT=0;	//��������������
uint16_t	TIM2CH2_CAPTURE_VAL;			//��ǰ���벶��ֵ
uint8_t TIM2CH2_CAPTURE_SAT=0; //��ǰ����״̬ 0Ϊ�ȴ������� 1Ϊ�ȴ��½���

#define SquareLen 10	//��������
uint8_t square_counter=0; //������������ÿSquareLen������Ϊһ��
uint32_t PeriodGroup[SquareLen]={0};//�洢ʮ����������
double avePeriod=0;
double SpeedSlide[4];//�����˲�����
uint8_t SpeedSlideCursor=0;//�����˲��α�
void addPeriodGroupN(uint32_t capcnt, uint8_t n);
double getAveragePeriod(void);
double SpeedSlideFilter(double value);//�����˲�����
double getAveValue(uint32_t* period);

//��ʱ��2�жϷ������	 
void TIM2_IRQHandler(void)
{ 
	//�ж��Ƿ�Ϊ�����ж�
 	if (TIM_GetITStatus(TIM2, TIM_IT_CC2) != RESET) //�ж��Ƿ�Ϊ�����ж�
	{
		
		TIM2CH2_CAPTURE_VAL= TIM_GetCapture2(TIM2);	//��ȡ��ǰ����ֵ
		//setTIM2Period(TIM2CH2_CAPTURE_VAL + TIM2CH2_CAPTURE_CNT*65535);	//���²�������
		if(square_counter==SquareLen)
		{
			avePeriod = getAveValue(PeriodGroup);
			//avePeriod=getAveragePeriod();
			setTIM2Period(avePeriod);	//���²������ڣ�60���ڷ���
			square_counter=0;
		}
		else
		{
			addPeriodGroupN(TIM2CH2_CAPTURE_VAL+TIM2CH2_CAPTURE_CNT*65536, square_counter); //������ӵ�square_counter	
			square_counter++;
			
		}
		TIM2CH2_CAPTURE_CNT = 0; //�����¸������أ�ֹͣ����
		TIM2CH2_CAPTURE_VAL = 0;	//�������׼���´β�׽����
		//TIM_SetCounter(TIM2,0);

		TIM_ClearITPendingBit(TIM2, TIM_IT_CC2|TIM_IT_Update); //����жϱ�־λ
		
	}
	//�ж��Ƿ�Ϊ�����ж�
	if (TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET) 
	{
		TIM2CH2_CAPTURE_CNT++;	//�����������
		if(TIM2CH2_CAPTURE_CNT > 200)
		{
			setTIM2Period(72000000);	//���ͣ�����������޷�����,�ֶ���0
		}
		//TIM2CH2_CAPTURE_VAL=0XFFFF;
		TIM_ClearITPendingBit(TIM2,TIM_IT_Update); //����жϱ�־λ
	}
 	

}


void addPeriodGroupN(uint32_t capcnt, uint8_t n)
{
	PeriodGroup[n] = capcnt; //�洢����
}

double getAveragePeriod(void)
{
	double temp = 0;
	uint8_t i;

	for(i=0; i<SquareLen; i++)
	{
		temp += PeriodGroup[i];
	}
	return (temp/(SquareLen));
}

uint32_t getPeriod(uint32_t a)
{
	return PeriodGroup[a]/10;
}

//�����˲�����
double SpeedSlideFilter(double value)
{
	double sumTemp;
	uint8_t i=0;
	SpeedSlide[SpeedSlideCursor] = value;
    SpeedSlideCursor++;
    SpeedSlideCursor = (SpeedSlideCursor % 4); //�α�ѭ���Լ�
	for(i=0; i<4; i++)
    {
        sumTemp += SpeedSlide[i];
    }
	return sumTemp/4;
}
double getAveValue(uint32_t* period)
{
	double sum=0,tempAve;
	int i,getOutlier=0;
	for(i=0; i<SquareLen; i++)
	{
		sum += period[i];
	}
	tempAve=sum/10;
	
	for(i=0;i<SquareLen;i++)
	{
		if ((double)period[i]/tempAve>1.5)
		{
			period[i]=0;
			getOutlier=1;
			break;
		}
	}
	
	if(getOutlier==1)
	{
		sum=0;
		
		for(i=0; i<SquareLen; i++)
		{
			sum += period[i];
		}
		return sum/(SquareLen-1);
	}
	else
	{
		return tempAve;
	}
}	
