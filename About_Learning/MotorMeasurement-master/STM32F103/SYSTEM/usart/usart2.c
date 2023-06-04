#include "usart2.h"
#include "var_space.h"
#include "math.h"

//extern uint32_t TestData;

void Dac1_Set_Vol(u16 vol);
void Dac2_Set_Vol(u16 vol);

//��ʼ��IO ����2 
//bound:������
void uart2_init(u32 bound){
	//GPIO�˿�����
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;
	NVIC_InitTypeDef NVIC_InitStructure;
	 
	//devin:������USART2����ӳ�䣬�ϸ�����ߵ��۵����
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2,ENABLE);    
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD ,ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_AFIO,ENABLE);
	GPIO_PinRemapConfig(GPIO_Remap_USART2, ENABLE);   /*��ӳ��ָ�����GPIO����*/
	
	//USART2_TXUSART2_TX   PD.5
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5; //PD.5
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;	//�����������
	GPIO_Init(GPIOD, &GPIO_InitStructure); //��ʼ��PD.5
   
	//USART2_RX	  PD.6
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6; //PD.6
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;//��������
	GPIO_Init(GPIOD, &GPIO_InitStructure);  //��ʼ��PD.6

	//USART2 NVIC ����

	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=3 ;//��ռ���ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 3;		//�����ȼ�3
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;			//IRQͨ��ʹ��
	NVIC_Init(&NVIC_InitStructure);	//����ָ���Ĳ�����ʼ��VIC�Ĵ���
  
   //USART ��ʼ������

	USART_InitStructure.USART_BaudRate = bound;//һ������Ϊ9600;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;//�ֳ�Ϊ8λ���ݸ�ʽ
	USART_InitStructure.USART_StopBits = USART_StopBits_1;//һ��ֹͣλ
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;//��Ӳ������������
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;	//�շ�ģʽ

	USART_Init(USART2, &USART_InitStructure); //��ʼ������
	USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);//���ռĴ����������ж�
	USART_Cmd(USART2, ENABLE);                    //ʹ�ܴ��� 
	USART_DMACmd(USART2,USART_DMAReq_Tx,ENABLE);

}

//uint16_t R[20]={165,330,495,660,825,990,1155,1320,1485,1650,1815,1980,2145,2310,2475,2640,2805,2970,3135,3300}; //DAC�����
//uint16_t R[20]={676,693,709,726,742,759,775,792,808,825,841,858,874,891,907,924,940,957,973,990}; //DAC�����
int RecLen=0;//
union{
	//struct{uint16_t ch1;uint16_t ch2;}ch;
	uint16_t Res_16;
	uint8_t Res_8[2];
	}Res;
float R;
void USART2_IRQHandler(void)                	//����2�жϷ������
{
	//uint8_t Res;
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)  //�����ж�(���ռĴ������ж�)0
	{
		
		Res.Res_8[RecLen++]=USART_ReceiveData(USART2);//(USART2->DR);	//��ȡ���յ�������
		if(RecLen==2)
		{	RecLen=0;		
			if(Res.Res_16<=0x14*100 && Res.Res_16 >0)
			{
				R=Res.Res_16/100.0*165;
				//Dac1_Set_Vol(R[Res - 0x01]); //�趨DACֵ;
					Dac1_Set_Vol(R); //�趨DACֵ;
			}
			else if(Res.Res_16>0x20*100 && Res.Res_16<=0x34*100)
			{
				 R=(Res.Res_16-3200)/100.0*165;
				
				//Dac2_Set_Vol(R[Res - 0x21]); //�趨DACֵ;
				Dac2_Set_Vol(R); //�趨DACֵ;
			}
			 else if (Res.Res_16==0)
			{
				Dac1_Set_Vol(0); //�ر�DAC1
			}
			 else if (Res.Res_16==0x20*100)
			{
				Dac2_Set_Vol(0); //�ر�DAC2
			}
		}
	}
	
	if(USART_GetITStatus(USART2, USART_IT_TXE) != RESET) //�����ж�(���ͼĴ������ж�)
	{
		
	}
	
} 


