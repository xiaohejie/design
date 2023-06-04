#include "timer.h"
#include "dma.h"
#include "var_space.h"


uint16_t sumShiftFilter(void);
uint16_t pretreatment0(void);
uint16_t pretreatment1(void);
uint16_t RankMaxToMin(uint16_t array[],uint16_t len);
void copy(uint16_t a[],uint16_t b[],uint16_t len);
extern uint16_t getPeriod(uint32_t );

uint32_t getAveragePeriod(void);
extern u8 SendBuff[];

//ͨ�ö�ʱ���жϳ�ʼ��
//����ʱ��ѡ��ΪAPB1��2������APB1Ϊ36M
//arr���Զ���װֵ��
//psc��ʱ��Ԥ��Ƶ��
//����ʹ�õ��Ƕ�ʱ��4!
void TIM4_Int_Init(u16 arr,u16 psc)
{
	TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE); //ʱ��ʹ��

	TIM_TimeBaseStructure.TIM_Period = arr; //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 ������5000Ϊ500ms
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  10Khz�ļ���Ƶ��
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ

	TIM_ITConfig(  //ʹ�ܻ���ʧ��ָ����TIM�ж�
		TIM4, //TIM4
		TIM_IT_Update ,
		ENABLE  //ʹ��
		);
	NVIC_InitStructure.NVIC_IRQChannel = TIM4_IRQn;  //TIM4�ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;  //��ռ���ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;  //�����ȼ�3��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���

	TIM_Cmd(TIM4, ENABLE);  //ʹ��TIMx����

}

//ͨ�ö�ʱ���жϳ�ʼ��
//����ʱ��ѡ��ΪAPB1��2������APB1Ϊ36M
//arr���Զ���װֵ��
//psc��ʱ��Ԥ��Ƶ��
//����ʹ�õ��Ƕ�ʱ��5
void TIM5_Int_Init(u16 arr,u16 psc)
{
  TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
	NVIC_InitTypeDef NVIC_InitStructure;

	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE); //ʱ��ʹ��

	TIM_TimeBaseStructure.TIM_Period = arr; //��������һ�������¼�װ�����Զ���װ�ؼĴ������ڵ�ֵ	 ������5000Ϊ500ms
	TIM_TimeBaseStructure.TIM_Prescaler =psc; //����������ΪTIMxʱ��Ƶ�ʳ�����Ԥ��Ƶֵ  10Khz�ļ���Ƶ��
	TIM_TimeBaseStructure.TIM_ClockDivision = 0; //����ʱ�ӷָ�:TDTS = Tck_tim
	TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;  //TIM���ϼ���ģʽ
	TIM_TimeBaseInit(TIM5, &TIM_TimeBaseStructure); //����TIM_TimeBaseInitStruct��ָ���Ĳ�����ʼ��TIMx��ʱ�������λ

	TIM_ITConfig(  //ʹ�ܻ���ʧ��ָ����TIM�ж�
		TIM5, //TIM5
		TIM_IT_Update ,
		ENABLE  //ʹ��
		);
	NVIC_InitStructure.NVIC_IRQChannel = TIM5_IRQn;  //TIM5����ж�
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 2;  //��ռ���ȼ�0��
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 2;  //�����ȼ�3��
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE; //IRQͨ����ʹ��
	NVIC_Init(&NVIC_InitStructure);  //����NVIC_InitStruct��ָ���Ĳ�����ʼ������NVIC�Ĵ���

	TIM_Cmd(TIM5, ENABLE);  //ʹ��TIMx����

}


uint8_t HexTable[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};   //16�����ַ���

#define StackLen 10
uint16_t SendData0 = 0; //�ȽϹ���Ҫ���͵�����0
uint16_t SendData1 = 0; //�ȽϹ���Ҫ���͵�����1
uint16_t DataStack0[StackLen] = {0}; //�˲�������
uint8_t StackCursor0 = 0; //�˲��������α�
uint16_t DataStack1[StackLen] = {0}; //�˲�������
uint8_t StackCursor1 = 0; //�˲��������α�

void TIM4_IRQHandler(void)   //TIM4�ж�
{
	if (TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET) //���ָ����TIM�жϷ������:TIM �ж�Դ
		{
			
			SendData0 = getTIM2Period();	//���˲�
			//SendData0 = getPeriod(0);
			//SendData0 =getAveragePeriod();
			SendData1 = getTIM3Frequency();
//			DataStack0[StackCursor0] = getTIM2Period();	//���˲�
//			SendData0 = pretreatment0(); //Ԥ����
//			DataStack1[StackCursor1] = getTIM3Frequency();
//			SendData1 = pretreatment1(); //Ԥ����
			//����װ��
			SendBuff[1] = HexTable[(SendData0>>12)&0x0f];
			SendBuff[2] = HexTable[(SendData0>>8)&0x0f];
			SendBuff[3] = HexTable[(SendData0>>4)&0x0f];
			SendBuff[4] = HexTable[(SendData0)&0x0f];
			SendBuff[6] = HexTable[(SendData1>>12)&0x0f];
			SendBuff[7] = HexTable[(SendData1>>8)&0x0f];
			SendBuff[8] = HexTable[(SendData1>>4)&0x0f];
			SendBuff[9] = HexTable[(SendData1)&0x0f];
			DMA_USART_Enable(DMA1_Channel7);
		}
	TIM_ClearITPendingBit(TIM4, TIM_IT_Update  );  //���TIMx���жϴ�����λ:TIM �ж�Դ
}

void TIM5_IRQHandler(void)   //TIM5�ж�
{
	//if (TIM_GetITStatus(TIM5, TIM_IT_Update) != RESET) //���ָ����TIM�жϷ������:TIM �ж�Դ
		//{
			 
			setTIM3Frequency(sumShiftFilter()); //�ۼӻ����˲�
			//setTIM3Frequency(pretreatment0());
			//clearTIM3Counter(); //����ۼ���
		//}
	TIM_ClearITPendingBit(TIM5, TIM_IT_Update  );  //���TIMx���жϴ�����λ:TIM �ж�Դ
}

uint8_t ShiftFilterCursor = 0;  //�˲����α�
uint16_t CounterGroup[25]={0};
uint16_t Rank[25]={0};


uint16_t sumShiftFilter(void)
{
    //uint8_t i = 0;
    uint16_t sumTemp = 0;
	
    CounterGroup[ShiftFilterCursor] = TIM_GetCounter(TIM3);
	TIM_SetCounter(TIM3, 0);   // ���������CNT
    TIM_Cmd(TIM3,ENABLE);
    ShiftFilterCursor++;
    ShiftFilterCursor = (ShiftFilterCursor % 25); //�α�ѭ���Լ�
	copy(Rank,CounterGroup,25);
	sumTemp=RankMaxToMin(Rank,24);//����
//     for(i=0; i<20; i++)
//     {
//         sumTemp += Rank[i];
//     }
    return (uint16_t)(sumTemp);
}

//Ԥ�����������ڻ���ƽ���˲��������ڴ�С��StackLen
uint16_t pretreatment0(void)
{
	uint32_t temp = 0;
	uint16_t ave = 0;
	uint8_t counter;
	DataStack0[StackCursor0]=sumShiftFilter();
	for(counter=0; counter<StackLen; counter++)
	{
		temp = temp+DataStack0[counter];
	}
	StackCursor0++;
	StackCursor0 = (StackCursor0 % StackLen); //�α�ѭ���Լ�
	ave = temp /StackLen;
	return ave; //��λ����ȡƽ��
}

uint16_t pretreatment1(void)
{
	uint32_t temp = 0;
	uint16_t ave = 0;
	uint8_t counter;
	for(counter=0; counter<StackLen; counter++)
	{
		temp = temp+DataStack1[counter];
	}										   
	StackCursor1++;
	StackCursor1 = (StackCursor1 % StackLen); //�α�ѭ���Լ�
	ave = temp /StackLen;
	return ave; //��λ����ȡƽ��
}
//ð�ݷ�����
uint16_t RankMaxToMin(uint16_t array[],uint16_t len)  
{  
    int i,j;  
	uint16_t temp=0;
	uint16_t sumTemp = 0;
    for(j=0;j<len;j++)  
		for(i=0;i<len-j;i++)  
			if(array[i]<array[i+1])  
			{  
				temp=array[i];  
				array[i]=array[i+1];  
				array[i+1]=temp;  
			}
	for(i=1; i<21; i++)
    {
        sumTemp += array[i];
    }
	return sumTemp;
}  
//������������
void copy(uint16_t a[],uint16_t b[],uint16_t len)
{
	int i=0;
	for (i=0;i<len;i++)
		a[i]=b[i];
}

