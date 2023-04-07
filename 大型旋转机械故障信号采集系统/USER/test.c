/*****************************************************************************

�������ƣ�����STM32F103��Ƭ���ļ���ʾ����
�������ڣ�2020-8-20
���ߣ�Alpha
������£�2020-1-3
�汾��V4.0
�ο���	1�������Ѽ����ϡ�Դ�룬����
		2������ԭ�Ӿ�Ӣ������
			�ο��飺STM32F1����ָ�ϣ���Ӣ�棩-�Ĵ����汾
			����Դ�룺��׼����-�Ĵ����汾
��Ƭ���ͺţ�STM32F103ZET6

˵��������������ҵ��;�����ڱ�������ɵ��κ���ʧ�������޹�
����������ԭ�Ӿ�Ӣ�壨��KEY2����ս���棬3.2������4.3������ʾ����С��

����˵����	
	PA1   �ź������
	PA4   �ź������
	KEY0  �л�����Ƶ��1K��10K��100K
	KEY1  �л�����״̬WORK��STOP
	KEY2  �л��ź��������Ƶ��10Hz��25Hz��50Hz��100Hz��150Hz��200Hz
	KEYUP �л��ź�����������ͷ��������Ҳ������ǲ�
	
*****************************************************************************/
#include "led.h"
#include "key.h"
#include "beep.h"
#include "exti.h"
#include "timer.h"
#include "lcd.h"
#include "adc.h" 
#include "dac.h"
#include "24cxx.h" 
#include "myiic.h"
#include "rs485.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "stm32_dsp.h"
#include "table_fft.h"
#include "math.h"
#include "MyFun.h"
#include "MyFun2.h"
#include "MyFun3.h"
#include "MyFun4.h"
//#include "kurtosis.h"

/*****************************************��������***********************************************/
#define NPT 1024   											//����
#define PI2 6.28318530717959

u8 Square_table[256]={
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
	255,255,255,255,255,255,255,255,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
	1,1,1,1,1,1,1,1,
};
u8 Sin_table[256]= {
	128,131,134,137,140,143,146,149,152,155,158,162,165,167,170,173,176,179,182,185,188,
	190,193,196,198,201,203,206,208,211,213,215,218,220,222,224,226,228,230,232,234,235,
	237,238,240,241,243,244,245,246,248,249,250,250,251,252,253,253,254,254,254,255,255,
	255,255,255,255,255,254,254,254,253,253,252,251,250,250,249,248,246,245,244,243,241,
	240,238,237,235,234,232,230,228,226,224,222,220,218,215,213,211,208,206,203,201,198,
	196,193,190,188,185,182,179,176,173,170,167,165,162,158,155,152,149,146,143,140,137,
	134,131,128,124,121,118,115,112,109,106,103,100,97,93,90,88,85,82,79,76,73,70,67,65,
	62,59,57,54,52,49,47,44,42,40,37,35,33,31,29,27,25,23,21,20,18,17,15,14,12,11,10,9,
	7,6,5,5,4,3,2,2,1,1,1,0,0,0,0,0,0,0,1,1,1,2,2,3,4,5,5,6,7,9,10,11,12,14,15,17,18,20,
	21,23,25,27,29,31,33,35,37,40,42,44,47,49,52,54,57,59,62,65,67,70,73,76,79,82,85,88,
	90,93,97,100,103,106,109,112,115,118,121,124,
};
u8 Triangle_table[256]={
	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,
	58,60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,96,98,100,102,104,106,108,
	110,112,114,116,118,120,122,124,126,128,130,132,134,136,138,140,142,144,146,148,150,
	152,154,156,158,160,162,164,166,168,170,172,174,176,178,180,182,184,186,188,190,192,
	194,196,198,200,202,204,206,208,210,212,214,216,218,220,222,224,226,228,230,232,234,
	236,238,240,242,244,246,248,250,252,254,254,252,250,248,246,244,242,240,238,236,234,
	232,230,228,226,224,222,220,218,216,214,212,210,208,206,204,202,200,198,196,194,192,
	190,188,186,184,182,180,178,176,174,172,170,168,166,164,162,160,158,156,154,152,150,
	148,146,144,142,140,138,136,134,132,130,128,126,124,122,120,118,116,114,112,110,108,
	106,104,102,100,98,96,94,92,90,88,86,84,82,80,78,76,74,72,70,68,66,64,62,60,58,56,
	54,52,50,48,46,44,42,40,38,36,34,32,30,28,26,24,22,20,18,16,14,12,10,8,6,4,2,0,
};

u8 key=0;																//�õ���ֵ
u16 i=0;
u32 adcx[NPT];													//�洢adc����
u32 adcmax = 0;													//���ֵ
u32 adcmin = 3300;											//��Сֵ
u16 vpp = 0;														//���ֵ����
int long fftin [NPT] = {0};							//FFT�������������
int long fftout[NPT] = {0};							//FFT������������	
u32 FFT_Mag[NPT/2] = {0};								//��Ƶ�������У���Ŵ���Ƶ�ʷ�����ֵ�����ֵ��С������FFT��Ƶ�׽���ǹ����ο�˹��Ƶ�ʶԳƵģ�����ֻ����һ��ĵ㼴�ɣ�
u16 t = 0;															//��ʱ���ж�3��������
float Set_T = 1000;											//TIM3�Զ���װ��ֵ
float Show_T = 1;												//�����ʱ�������λKHZ
u8 tmp_T[] = "000.0";
u32 F = 0;															//Ƶ��ֵ
u16 U = 41;								
u16 V = 660;														//�ֶȵ�λ660mv/div
u16 get_v=0;														//�����ʾ��ѹ
u16 save_v=0;														//�洢��ѹ
float BL = 50.52;												//�綯�� E = BLv;
float k = 336.3;												//���ڲ�ü��ٶ�
float v;
float a = 0.0;
float preA = 0.0;
u8 aStr[] = "0000.0";
u8 aCount = 0;													//��¼���ٶȳ�����ֵ
u8 tmpandaStr[] = "0000.0";
u8 vStr[] = "0000.0";										//u8���޷����ַ���u16��u32���޷���������16λ��32λ��
int flag=0;															//�ɼ�Ƶ�ʱ�־
int Aflag = 1;
u8 adc_flag=0;													//�ɼ������־λ
u8 clear_flag=1;												//Hold on��־λ��0����>Hold on
u8 isPinpu = 0;													//�鿴Ƶ��ͼ
u16 table[15] ={16,32,48,64,80,96,112,128,144,160,176,192,208,224,240};//�̶�X��������
u16 h=0;																//�����±�
u8 Wave_flag=1;													//�����������
u16 timeSet=39;													//�������Ƶ��
double tmp_1 = 0.000; 
double pretmp_1 = 0.000;
float temp;
#define SIZE 60
u8 tmp[] = "0000.0";
u8 rec_length = 0;                      //���ճ���
u8 rs485_recbuf[60];                    //��������
u8 data[SIZE];                          //24C02������ 
u16 length=0;                           //���ͳ��� 
char sendchar[70];                      //������������
u8 data_Serial[70];					  					//���ڴ�ŷ��͵����ڵ�����
char data_Esp8266[70];					 			  //���ڴ�ŷ��͵�ESP8266������	
int myI = 0;														//���ڼ�¼MyNum�����еĸ���
float MyNum[1024];											//��������MyFun�����е�����
float MyNum2[1024];											//��������MyNum����ú������
//�ֱ���ƽ��ֵ����׼�ƫ�ȡ��Ͷȡ����ֵ��������������������������������������ԣ������������
float Mean, Std, Skewness, Kurtosis, Peak2Peak, RMS, CrestFactor, ShapeFactor, ImpulseFactor, MarginFactor, Energy; 
float f, p3, CrestFactor1;
float pinyu[3];
//�������ݵ�ƽ��ֵ����׼�ƫ�ȡ��Ͷȡ����ֵ��������������������������������������ԣ������������
float NormalSkewness = 0.68, NormalKurtosis = 6.0, NormalCrestFactor = 5.3, NormalImpulseFactor = 7.0, NormalMarginFactor = 31.0; 
float Normalf = 0.615, Normalp3 = 4.03, NormalFactor1 = 4.03;

/*************************************��������***********************************/
void lcd_huadian(u16 a,u16 b);
void lcd_huaxian(u16 x1,u16 y1,u16 x2,u16 y2);
void lcd_fill(u16 sx,u16 sy,u16 ex,u16 ey,u16 color);
void lcd_init(void);
void clear_point(void);		
void InitBufInArray(void);
void LCDshow(void);
void GetPowerMag(void);
void ldc_show_fft(unsigned int *p);  
void dataZhuanhuan(u16 x);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               

/*************************************������***********************************/
int main(void)
 {	 
	u16 len;										//���ڽ������ݵĳ���	
	Stm32_Clock_Init(9);				//ϵͳʱ������
	delay_init(72);							//��ʱ������ʼ��	  
	uart_init(72,115200);	 			//���ڳ�ʼ��
 	LED_Init();									//LED�˿ڳ�ʼ��
	LCD_Init();									//LCD��ʼ��
	BEEP_Init();		 						//��ʼ��������IO
	EXTIX_Init();         			//��ʼ���ⲿ�ж����� 	 
  Adc_Init();									//ADC��ʼ��
	AT24CXX_Init();							//IIC��ʼ��  	
	RS485_Init(36, 115200);			//��ʼ��RS485
	 
	//72��ƵΪ1M,T*T1=1000		T=1000ʱ��1kHZ		TIM3���Ʋ�����
	TIM3_Int_Init((Set_T-1),72-1);    //(10-1,71)100kHz  (1000-1,71)1kHz	 		 
	TIM6_Int_Init(timeSet,71);	
	
	 /* ��ʼ���� */
	POINT_COLOR=BLACK;
	LCD_showInterface();
	delay_ms(5000);
	LCD_Clear(WHITE);
	lcd_init(); 			//���û�����Ļ
	 
	 while(1) 
	{		 
		key=KEY_Scan(0);	//�õ���ֵ
		RS485_Receive_Data(rs485_recbuf,&rec_length);						//RS-485��ѯ���յ�������
		if(rec_length){
			//�����Ƚ�һЩ��������data�У�Ȼ���ٽ��ж�ȡ
			AT24CXX_Write(0,(u8*)rs485_recbuf,rec_length);				//��AT24CXX�����ָ����ַ��ʼд��ָ������������
			AT24CXX_Read(0,data,SIZE);														//��AT24CXX�����ָ����ַ��ʼ����ָ������������
		}
		
		//������Ҫ�����жϣ��ж������Ƿ���ܴ�������/����ʹ�ð��������°���ʱ�����д洢
		AT24CXX_Write(0,(u8*)tmp,4);														//��AT24CXX�����ָ����ַ��ʼд��ָ������������
		AT24CXX_Read(0,rs485_recbuf,4);													//��AT24CXX�����ָ����ַ��ʼ����ָ������������
			
		while(adc_flag == 0);																		//�ȴ����ݲɼ����
        adc_flag=0;			
		
		/*�������FFT�任����Ҫ������*/
		for(i=0;i<NPT;i++)																					//NPT��1024���㣬ȷ��max��min
		{
			fftin[i] = 0;
			fftin[i] = adcx[i] << 16;
		}
		GetPowerMag();
		
		adcmax=adcmax*0.80586;adcmin=adcmin*0.80586;   							//0.8 = 3300/4095
			
		/* ʵʱ������ʾ��ͨ��clear_flag����work&stop */
		if(clear_flag){
			clear_point();    																				//������ʾ����ǰ��
			POINT_COLOR=BLUE;
			LCD_ShowNum(275,115+12,adcmax,4,16);
			LCD_ShowNum(275,150+12,adcmin,4,16);
			vpp=adcmax-adcmin;																				//��ѹ��ֵ��ʾ
			LCD_ShowNum(275,80+12,vpp,4,16);													//��ʾ���ֵ		
			LCDshow();
			LCD_ShowString(365,45+24,200,24, 24, vStr);								//ʵʱ��ʾ�е����ݣ���λ��mm/s
			if(Aflag == -1){
				//LCD_ShowString(300,45+48+24,200,24, 24, "-");
			}
			LCD_ShowString(365,45+48+24,200,24, 24, aStr);						//ʵʱ��ʾ�еļ��ٶ�
			LCD_ShowNum(340,45+24*6+24,F,5,24);												//Ƶ��
			LCD_ShowNum(340,45+24*4+24,tmp_1,5,24);										//��ѹ
			LCD_ShowNum(265,185+12,F,5,16);														//Ƶ����ʾ
			//����ü��ٶȵ�ֵ����һ������ֵ��˵�������񶯳������⣬����������
			/*
//������ñ�������ֵ����Ҫ���е���
			if(a > 0.005){
				aCount++;
			}
			if(aCount >= 5){
				BEEP=1;  			//����������
//������Ҫ��������
				for(i=0;i<4;i++)  //��ʾ�źŹ���
				{
					LCD_Signal(10 + i*24,280,24,24,i);				 
				}
				delay_ms(1000);
				BEEP=0;
				aCount = 0;		//aCount��������
				LCD_ShowString(10,280,200,24, 24, "                ");
			}*/
		}
		/************************** ͨ������2�۲�Ƶ��ͼ *************************************/
		if(isPinpu){
			clear_flag = 0;
			LCD_Clear(WHITE);	 									//����
			ldc_show_fft(FFT_Mag);							//����Ƶ��ͼ
		}
		
		/******************************** RS-485ͨ�� ***************************************/
		//�������ݣ�ͨ��RS485���գ������﷢�����ݣ�ÿ�η����ĸ��ֽڣ�
		RS485_Send_Data(tmp,4);								//����4���ֽڵĵ�ѹ�ź�
		
		TIM3->CR1|=0x01;    									//ʹ�ܶ�ʱ��3			
		adcmax = 0;	adcmin = 3300;						//�����ֵ
	} 
}

/*************************************LCD��ʾ����ʼ��****************************************/
void lcd_init(void)
{
	POINT_COLOR=RED;
	for(i=14;i<22;i++)  //��ʾ��е�񶯼�Ⲩ��
	{
		LCD_ShowHEAD(10 + i*34 - 14*34,10,32,32,i);				 
	}
	LCD_ShowString(260,63+12,200,16,16,"vpp/mv:");				//��ֵ/����
	LCD_ShowString(260,98+12,200,16,16,"max/mv:");				//���������ڵ����ֵ
	LCD_ShowString(260,133+12,200,16,16,"min/mv:");	  		//���������ڵ���Сֵ
	LCD_ShowString(260,168+12,200,16,16,"f/Hz:");		  		//Ƶ��/Hz
	LCD_ShowString(260,203+12,200,16,16,"OSR/kHz:");  		//������

	POINT_COLOR=BLUE;
	lcd_huaxian(0,0,0,200);									//��4���߿���
	lcd_huaxian(256,0,256,200);
	lcd_huaxian(0,0,256,0);		
	lcd_huaxian(0,200,256,200);

	POINT_COLOR=BLUE;		

	LCD_ShowNum(265,220+12,Show_T,3,16);		//�״βɼ�Ƶ��
}

/**********************************���µ�ѹ����ͼ*************************************/
void clear_point(void)
{
	u16 x=0;
	for(x=0;x<NPT/4 && clear_flag;x++)
	{	
		POINT_COLOR=WHITE;	
		lcd_huaxian(x  ,1,x  ,199);		//ɾ��ԭʼ�����������������߿�

		POINT_COLOR=BLUE;
		lcd_huaxian(0,0,0,200);				//����߿�
		lcd_huadian(x,100);						//������
				
		if(x == table[h])							//���̶ȣ����ϡ��С�����
		{
			lcd_huaxian(x,1,x,3);
			lcd_huaxian(x,101,x,103); 
			lcd_huaxian(x,199,x,197);
			h++;
			if(h>=16) h=0;
		}	
		if(x==128) 										//���̶�������
		{
			lcd_huaxian(x,1,x,199);
		}
	  
		
		dataZhuanhuan(x);
	}
}

/*****************************************����ת��*****************************************/
void dataZhuanhuan(u16 x){
		u16 i = 0;
		float y = 0.0;
	  get_v = adcx[x]/U+(90-((adcmax-adcmin)/(2*U)));
		/*��ADC��ֵ����ת����תΪ��ѹֵ*/
		temp=adcx[x]*(3.3/4096);
		adcx[x] = temp;
		tmp_1 = adcx[x];
		temp -= adcx[x];
		tmp_1 += temp;
		tmp_1 *= 1000;											//�õ�����
		/*������ٶȺ��ٶ�*/
		preA = a;
	  Aflag = 1;
		if(x > 0 && pretmp_1 > tmp_1){
			Aflag = -1;
		}
		pretmp_1 = tmp_1;
		a = Aflag * (tmp_1 / k);						//����õ����ٶȣ��õĺ�������ģ�
//		printf("���ٶ� %f\r\n", a);
//		printf("���� %d\r\n", Aflag);
		sprintf(aStr, "%.4f", a);						//���õ��ļ��ٶ�ת��Ϊ�ַ�����ʽ
		v = tmp_1 / BL;											//����õ��񶯴��������ٶ�,��λ��mm/s
		sprintf(vStr, "%.1f", v);						//���õ��ļ��ٶ�ת��Ϊ�ַ�����ʽ
		sprintf(tmp, "%.1f", tmp_1);				//���õ�������ת�����ַ�����ʽ��Ȼ���뵽��λ��
		
		/* 
			���н���������ʹ�õ������Ǽ��ٶ�
		*/
		MyNum[myI] = a;		
		myI++;
		if(myI == 1024){										//�����ڴ洢��������������Ҫ���н������
			//LCD_ShowString(350,45+24*7+24,200,24,24,"start");				//��ʼ����
			/**Ҫ����MyFun���룬MyFun1����Ƿ���ڹ���**/
			MyFun(MyNum, MyNum2);				//�õ�MyNum2Ϊ���н��봦��������
			//LCD_ShowString(350,45+24*7+24,200,24,24,"wait ");				//�������
			/*
			 *ʱ�����		//����ʱ������������������ʱ���������жԱȣ���Ҫ�ԱȾ�����ֵ���Ͷ�ֵ��ƫ�ȣ�
			 */	
			/*
//			Mean = funMean(MyNum2);
//			Std = funB_std(MyNum2);	
//			Peak2Peak = funPeak2Peak(MyNum2);
//			RMS = funRMS(MyNum2);
//			ShapeFactor = funShapeFactor(MyNum2);
//			Energy = funEnergy(MyNum2);
			*/
			Skewness = funSkewness(MyNum2);
			Kurtosis = funKurtosis(MyNum2);	
			CrestFactor = funCrestFactor(MyNum2);
			ImpulseFactor = funImpulseFactor(MyNum2);
			MarginFactor = funMarginFactor(MyNum2);
			/*
			* Ƶ�����		����Ƶ������������������Ƶ���������жԱȣ���Ҫ�Աȷ�ֵ���ӣ���ֵ���������������
			*/
			MyFun4(MyNum2, 12800, pinyu);
			//��ν��жԱ�		ʱ��Ƕ�NormalSkewness = 0.68, NormalKurtosis = 6.0, NormalCrestFactor = 5.3, NormalImpulseFactor = 7.0, NormalMarginFactor = 31.0; 
			//LCD_ShowString(350,45+24*7+24,200,24,24,"end  ");				//�������
			if(Skewness > NormalSkewness || Kurtosis > NormalKurtosis || CrestFactor > NormalCrestFactor || ImpulseFactor > NormalImpulseFactor || MarginFactor > NormalMarginFactor){
				//˵�����ֳ��ֹ��ϣ����б���		���������Ҫ��������
				//BEEP=1;  			//����������
				LED0=!LED0;	
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_shiyu(175+i*34,40+24*8+24,24,24,i);
				}
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_Chilun(175+i*34,70+24*8+24,24,24,i);
				}
			}
			//Ƶ��Ƕȣ���ֵ���ӣ���ֵ�������������
			if(pinyu[0] > 0.615 || pinyu[1] < 4.03 || pinyu[2] < 4.03){
				//˵�����ֳ��ֹ��ϣ����б���		���������Ҫ��������
				//BEEP=1;  			//����������
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_pinyu(175+i*34,40+24*8+24,24,24,i);
				}
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_Chilun(175+i*34,70+24*8+24,24,24,i);
				}
			}
			/**Ȼ����������֮��Ҫ���±�myI�������㣬������һ�μ��**/
			myI = 0;
		}	

		length = NPT/4;
		sendchar[x] = tmp_1;								//���͵���λ�������ݣ�������ͨ�����飩
		data_Serial[x] = tmp_1;							//���͵����ڵ�����
		
		lcd_huaxian(x,save_v,x+1,get_v);		//���ߣ�����۲�
		save_v = get_v;											//�洢����
}

/****************************************����Ƶ��ͼ*****************************************/
void ldc_show_fft(unsigned int *p){
		unsigned int *pp = p + 1;															//p+1�൱����ֱ�Ӱ�0HZ�����˵���
		for(i = 0; i < 480; i++){
			LCD_Fill(i, 319-*pp*0.11, (i+1), 319, RED);			    //��Ч������ʾ��ɫ
			LCD_Fill(i, 0, (i+1), 319-*pp*0.11,WHITE);		      //����������ʾ��ɫ
			pp++;
		}
}

/*************************************ʵʱ������ʾ**************************************/
void LCDshow(void){
		POINT_COLOR = BLUE; 
		/*************************************����ͨ��***************************************/
		//�����ݷ��͵�����(�����Ƚ���ע�ͣ������۲������Ϸ���ı仯)
		Usart1_Send_Srting(tmp); 
		Usart1_Send_Srting(aStr);
		for(i=22;i<26;i++)  //ʵʱ��ʾ
		{
		 LCD_ShowHEAD(100+i*34-15*34,10,32,32,i);			  
		}
		//��ʾ�ٶ�
		for(i=0;i<4;i++)   //��ʾ��ǰ�ٶ�/���ٶ�
		{
			LCD_Showsudu(350+i*26,45,24,24,i);		 	 
		}
		//��ʾ���ٶ�
		for(i=0;i<5;i++)   //��ʾ��ǰ�ٶ�/���ٶ�
		{
			LCD_Showjiasudu(350+i*26,69+24,24,24,i); 			 
		}
		//��ʾ��ѹ
		for(i=2;i<7;i++)   //��ʾ��ǰ��ѹ
		{	
		 LCD_Showdianya(350+i*26-2*26,46+24*4,24,24,i);	 		 
		}
		LCD_ShowString(350,45+24*4+24,200,24,24,"     mv");				//��ʾ��ѹ��λ
		//��ʾƵ��
		for(i=0;i<4;i++)   //��ʾ��ǰƵ��
		{
			LCD_ShowHz(350+i*26,46+24*6,24,24,i);	 		 
		}
		LCD_ShowString(350,45+24*6+24,200,24,24,"     Hz");				//��ʾƵ�ʵ�λ 
}
/******************************************************************
��������:GetPowerMag()
��������:�������г����ֵ
����˵��:
������ע:�Ƚ�lBufOutArray�ֽ��ʵ��(X)���鲿(Y)��Ȼ������ֵ(sqrt(X*X+Y*Y)
*******************************************************************/
void GetPowerMag(void)
{
		u16 temp = 0;
		float X,Y,IX,IY,Mag,magmax=0,sample_frequency  = 0;
		unsigned short i;
		//������cr4_fft_1024_stm32
		cr4_fft_1024_stm32(fftout, fftin, NPT);	
    for(i=1; i<NPT/2; i++)
    {
			X  = (fftout[i] << 16) >> 16;
      Y  = (fftout[i] >> 16);
				
			IX = NPT * ((float)X) / 32768;
			IY = NPT * ((float)Y) / 32768;	
			
      Mag = sqrt(IX * IX + IY * IY) / NPT;     		//��ֵ��С��ȡģ
			
			if(i==0){
				FFT_Mag[i] = (unsigned long)(Mag * 32768);
			}else{
				FFT_Mag[i] = (unsigned long)(Mag * 65536);
			}
			//�ҳ���ֵ���ĵ�
			if(Mag > magmax)
			{
				magmax = Mag;
				temp = i;
			}				
    }
	//����ֱ��������ֵ���ĵ��������е�λ�ã������������Ӧ��Ƶ��Ҳ�������ǲ������ε�Ƶ��
		sample_frequency = 72000000.0 / (float)((Set_T) * (71 + 1));					
		if(Set_T ==   1000)		F=(u32)((double)sample_frequency*temp/NPT);			//����Ƶ��Ϊ   1KHz
		if(Set_T == 156.25)		F=(u32)((double)sample_frequency*temp/NPT);			//����Ƶ��Ϊ 6.4KHz
		if(Set_T ==    100)		F=(u32)((double)sample_frequency*temp/NPT);			//����Ƶ��Ϊ  10KHz
		if(Set_T == 78.125)		F=(u32)((double)sample_frequency*temp/NPT);			//����Ƶ��Ϊ12.8KHz
}


//����ԭ���ض��廭��
void lcd_huadian(u16 a,u16 b)			
{							    
	LCD_Fast_DrawPoint(a,240-b+12,BLUE);
}


//����ԭ���ض��廭��
void lcd_huaxian(u16 x1,u16 y1,u16 x2,u16 y2)	
{
	LCD_DrawLine(x1,240+12-y1,x2,240+12-y2);
}

//��ʱ��3�жϷ������	
//ÿ������Ƶ�ʲ���һ��
void TIM3_IRQHandler(void)
{ 
	if(TIM3->SR&0X0001)//����ж�
	{
		adcx[t]=Get_Adc(ADC_CH1);				//���β���
//		adcx[t]=Get_Adc_Average(ADC_CH1,3);		//��β���ȡ��ֵ		
		if(adcx[t] >= adcmax)		adcmax = adcx[t];		//��ȡ��ֵ
		if(adcx[t] <= adcmin)		adcmin = adcx[t];
		
		t++;
		if(t==NPT) 
		{
			t=0;
			adc_flag = 1;
			TIM3->CR1 &= (uint16_t)(~((uint16_t)0x0001));//ʧ�ܶ�ʱ��3	
		}
	}				   
	TIM3->SR&=~(1<<0);//����жϱ�־λ 	    
}


	//�ⲿ�ж�3�������
void EXTI3_IRQHandler(void)
{
	delay_ms(10);	//����
	if(KEY1==0)	 	//����KEY1
	{	
		if(clear_flag == 1)
		{
			TIM3->CR1 &= (uint16_t)(~((uint16_t)0x0001));//ʧ�ܶ�ʱ��3					
			clear_flag=0;
			LCD_ShowString(8,275,200,16,16,"STOP  ");			
		}
		else
		{
			TIM3->CR1|=0x01;    //ʹ�ܶ�ʱ��3				
			clear_flag=1;
			LCD_ShowString(8,275,200,16,16,"WORK");
		}
		//while(KEY1==1);
	}		 
	EXTI->PR=1<<3;  //���LINE3�ϵ��жϱ�־λ  
}

//�ⲿ�ж�4�������
void EXTI4_IRQHandler(void)
{
	delay_ms(10);	//����
	if(KEY0==0)	 	//����KEY0
	{
		POINT_COLOR=BLUE;		
		flag++;
		printf("%d", flag);
		LCD_ShowString(265,220+12,200,3,16,"       ");	
		if(flag==1)//����Ƶ��Ϊ6.4khz
		{
			Set_T=156.25;
			Show_T = 6.4;
			sprintf(tmp_T, "%.1f", Show_T);
			LCD_ShowString(265,220+12,200,3,16,tmp_T);	
		}
		else if(flag==2)//����Ƶ��Ϊ12.8khz
		{
			Set_T = 78.125;
			Show_T = 12.8;
			sprintf(tmp_T, "%.1f", Show_T);
			LCD_ShowString(265,220+12,200,3,16,tmp_T);		
		}
		else if(flag==3) //����Ƶ��Ϊ100khz
		{
			Set_T=10;
			Show_T = 100;
			LCD_ShowNum(265,220+12,Show_T,3,16);	
		}
		else if(flag==4)//����Ƶ��Ϊ1khz
		{
			Set_T=1000;
			Show_T = 1;
			LCD_ShowNum(265,220+12,Show_T,3,16);	
			flag=0;
		}
							   
		TIM3->ARR=(Set_T-1);  			//�趨�������Զ���װֵ
		//while(KEY0==0);
	}
	EXTI->PR=1<<4;  					//���LINE4�ϵ��жϱ�־λ  
}		
//�ⲿ�ж�2�������
void EXTI2_IRQHandler(void)
{
	delay_ms(10);	//����
	if(KEY2==0)	 	//����KEY2
	{
		isPinpu = !isPinpu;
//		if(timeSet==390)
//			timeSet=156;	//25Hz
//		else if(timeSet==156)
//			timeSet=78;		//50Hz
//		else if(timeSet==78)
//			timeSet=39;		//100Hz
//		else if(timeSet==39)
//			timeSet=26;		//150Hz
//		else if(timeSet==26)
//			timeSet=19;		//200Hz
//		else if(timeSet==19)	
//			timeSet=390;	//50Hz
		TIM6->ARR=timeSet;	  
		//while(KEY2==1);
	}		 
	EXTI->PR=1<<2;  //���LINE2�ϵ��жϱ�־λ  
}   

//��ʱ��6�жϷ������	 
void TIM6_IRQHandler(void)
{ 	
	static u16 intr=0;
	if(TIM6->SR&0X0001)		//����ж�
	{
		intr++;
		if(intr==256)
			intr=0;
		switch (Wave_flag)
		{
			case 1:Dac1_Set_Vol(Square_table[intr]*12);		//DA���
				break;
			case 2:Dac1_Set_Vol(Sin_table[intr]*12);		//DA���
				break;
			case 3:Dac1_Set_Vol(Triangle_table[intr]*12);	//DA���
				break;
			default :
				break;
		}
	}				   
	TIM6->SR&=~(1<<0);	//����жϱ�־λ 	    
}


////�ⲿ�ж�0�������
//void EXTI0_IRQHandler(void)
//{
//	delay_ms(10);	//����
//	if(WK_UP==1)	//WK_UP����
//	{				 
//		if(Wave_flag==1)
//			Wave_flag=2;
//		else if(Wave_flag==2)
//			Wave_flag=3;
//		else if(Wave_flag==3)
//			Wave_flag=1;		
//		while(WK_UP==1);
//	}		 
//	EXTI->PR=1<<0;  //���LINE0�ϵ��жϱ�־λ  
//}


