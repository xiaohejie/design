/*****************************************************************************

程序名称：基于STM32F103单片机的简易示波器
创建日期：2020-8-20
作者：Alpha
最近更新：2020-1-3
版本：V4.0
参考：	1）网络搜集资料、源码，整理
		2）正点原子精英版资料
			参考书：STM32F1开发指南（精英版）-寄存器版本
			部分源码：标准例程-寄存器版本
单片机型号：STM32F103ZET6

说明：请勿用于商业用途，由于本代码造成的任何损失与作者无关
适用于正点原子精英板（无KEY2）、战舰版，3.2寸屏（4.3寸屏显示画面小）

功能说明：	
	PA1   信号输入端
	PA4   信号输出端
	KEY0  切换采样频率1K、10K、100K
	KEY1  切换工作状态WORK、STOP
	KEY2  切换信号输出波形频率10Hz、25Hz、50Hz、100Hz、150Hz、200Hz
	KEYUP 切换信号输出波形类型方波、正弦波、三角波
	
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

/*****************************************参数声明***********************************************/
#define NPT 1024   											//点数
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

u8 key=0;																//得到键值
u16 i=0;
u32 adcx[NPT];													//存储adc数据
u32 adcmax = 0;													//最大值
u32 adcmin = 3300;											//最小值
u16 vpp = 0;														//峰峰值变量
int long fftin [NPT] = {0};							//FFT运算地输入数组
int long fftout[NPT] = {0};							//FFT运算地输出数组	
u32 FFT_Mag[NPT/2] = {0};								//幅频特性序列（序号代表频率分量，值代表幅值大小。由于FFT的频谱结果是关于奈奎斯特频率对称的，所以只计算一半的点即可）
u16 t = 0;															//定时器中断3计数变量
float Set_T = 1000;											//TIM3自动重装载值
float Show_T = 1;												//采样率变量，单位KHZ
u8 tmp_T[] = "000.0";
u32 F = 0;															//频率值
u16 U = 41;								
u16 V = 660;														//分度单位660mv/div
u16 get_v=0;														//获得显示电压
u16 save_v=0;														//存储电压
float BL = 50.52;												//电动势 E = BLv;
float k = 336.3;												//用于测得加速度
float v;
float a = 0.0;
float preA = 0.0;
u8 aStr[] = "0000.0";
u8 aCount = 0;													//记录加速度超出阈值
u8 tmpandaStr[] = "0000.0";
u8 vStr[] = "0000.0";										//u8：无符号字符，u16、u32：无符号整数（16位、32位）
int flag=0;															//采集频率标志
int Aflag = 1;
u8 adc_flag=0;													//采集允许标志位
u8 clear_flag=1;												//Hold on标志位，0——>Hold on
u8 isPinpu = 0;													//查看频谱图
u16 table[15] ={16,32,48,64,80,96,112,128,144,160,176,192,208,224,240};//刻度X坐标数组
u16 h=0;																//数组下标
u8 Wave_flag=1;													//输出波形类型
u16 timeSet=39;													//输出波形频率
double tmp_1 = 0.000; 
double pretmp_1 = 0.000;
float temp;
#define SIZE 60
u8 tmp[] = "0000.0";
u8 rec_length = 0;                      //接收长度
u8 rs485_recbuf[60];                    //接收内容
u8 data[SIZE];                          //24C02中数据 
u16 length=0;                           //发送长度 
char sendchar[70];                      //发送数据数组
u8 data_Serial[70];					  					//用于存放发送到串口的数据
char data_Esp8266[70];					 			  //用于存放发送到ESP8266的数据	
int myI = 0;														//用于记录MyNum数组中的个数
float MyNum[1024];											//创建用于MyFun函数中的数组
float MyNum2[1024];											//创建用于MyNum处理好后的数据
//分别是平均值、标准差、偏度、峭度、峰峰值、均方根、振幅因数、波形因数、冲击因数、裕度因数、能量
float Mean, Std, Skewness, Kurtosis, Peak2Peak, RMS, CrestFactor, ShapeFactor, ImpulseFactor, MarginFactor, Energy; 
float f, p3, CrestFactor1;
float pinyu[3];
//正常数据的平均值、标准差、偏度、峭度、峰峰值、均方根、振幅因数、波形因数、冲击因数、裕度因数、能量
float NormalSkewness = 0.68, NormalKurtosis = 6.0, NormalCrestFactor = 5.3, NormalImpulseFactor = 7.0, NormalMarginFactor = 31.0; 
float Normalf = 0.615, Normalp3 = 4.03, NormalFactor1 = 4.03;

/*************************************函数声明***********************************/
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

/*************************************主函数***********************************/
int main(void)
 {	 
	u16 len;										//串口接收数据的长度	
	Stm32_Clock_Init(9);				//系统时钟设置
	delay_init(72);							//延时函数初始化	  
	uart_init(72,115200);	 			//串口初始化
 	LED_Init();									//LED端口初始化
	LCD_Init();									//LCD初始化
	BEEP_Init();		 						//初始化蜂鸣器IO
	EXTIX_Init();         			//初始化外部中断输入 	 
  Adc_Init();									//ADC初始化
	AT24CXX_Init();							//IIC初始化  	
	RS485_Init(36, 115200);			//初始化RS485
	 
	//72分频为1M,T*T1=1000		T=1000时，1kHZ		TIM3控制采样率
	TIM3_Int_Init((Set_T-1),72-1);    //(10-1,71)100kHz  (1000-1,71)1kHz	 		 
	TIM6_Int_Init(timeSet,71);	
	
	 /* 初始界面 */
	POINT_COLOR=BLACK;
	LCD_showInterface();
	delay_ms(5000);
	LCD_Clear(WHITE);
	lcd_init(); 			//画好基本屏幕
	 
	 while(1) 
	{		 
		key=KEY_Scan(0);	//得到键值
		RS485_Receive_Data(rs485_recbuf,&rec_length);						//RS-485查询接收到的数据
		if(rec_length){
			//可以先将一些参数放入data中，然后再进行读取
			AT24CXX_Write(0,(u8*)rs485_recbuf,rec_length);				//在AT24CXX里面的指定地址开始写入指定个数的数据
			AT24CXX_Read(0,data,SIZE);														//在AT24CXX里面的指定地址开始读出指定个数的数据
		}
		
		//这里需要进行判断：判断数据是否可能存在问题/或者使用按键：按下按键时，进行存储
		AT24CXX_Write(0,(u8*)tmp,4);														//在AT24CXX里面的指定地址开始写入指定个数的数据
		AT24CXX_Read(0,rs485_recbuf,4);													//在AT24CXX里面的指定地址开始读出指定个数的数据
			
		while(adc_flag == 0);																		//等待数据采集完成
        adc_flag=0;			
		
		/*处理进行FFT变换所需要的数据*/
		for(i=0;i<NPT;i++)																					//NPT，1024个点，确定max与min
		{
			fftin[i] = 0;
			fftin[i] = adcx[i] << 16;
		}
		GetPowerMag();
		
		adcmax=adcmax*0.80586;adcmin=adcmin*0.80586;   							//0.8 = 3300/4095
			
		/* 实时数据显示，通过clear_flag进行work&stop */
		if(clear_flag){
			clear_point();    																				//更新显示屏当前列
			POINT_COLOR=BLUE;
			LCD_ShowNum(275,115+12,adcmax,4,16);
			LCD_ShowNum(275,150+12,adcmin,4,16);
			vpp=adcmax-adcmin;																				//电压差值显示
			LCD_ShowNum(275,80+12,vpp,4,16);													//显示峰峰值		
			LCDshow();
			LCD_ShowString(365,45+24,200,24, 24, vStr);								//实时显示中的数据，单位：mm/s
			if(Aflag == -1){
				//LCD_ShowString(300,45+48+24,200,24, 24, "-");
			}
			LCD_ShowString(365,45+48+24,200,24, 24, aStr);						//实时显示中的加速度
			LCD_ShowNum(340,45+24*6+24,F,5,24);												//频率
			LCD_ShowNum(340,45+24*4+24,tmp_1,5,24);										//电压
			LCD_ShowNum(265,185+12,F,5,16);														//频率显示
			//若测得加速度的值大于一定的阈值，说明机器振动出现问题，蜂鸣器报警
			/*
//这边设置报警的阈值，需要进行调整
			if(a > 0.005){
				aCount++;
			}
			if(aCount >= 5){
				BEEP=1;  			//蜂鸣器报警
//这里需要进行完善
				for(i=0;i<4;i++)  //显示信号故障
				{
					LCD_Signal(10 + i*24,280,24,24,i);				 
				}
				delay_ms(1000);
				BEEP=0;
				aCount = 0;		//aCount重新置零
				LCD_ShowString(10,280,200,24, 24, "                ");
			}*/
		}
		/************************** 通过按键2观察频谱图 *************************************/
		if(isPinpu){
			clear_flag = 0;
			LCD_Clear(WHITE);	 									//清屏
			ldc_show_fft(FFT_Mag);							//绘制频谱图
		}
		
		/******************************** RS-485通信 ***************************************/
		//发送数据（通过RS485接收）（这里发送数据：每次发送四个字节）
		RS485_Send_Data(tmp,4);								//发送4个字节的电压信号
		
		TIM3->CR1|=0x01;    									//使能定时器3			
		adcmax = 0;	adcmin = 3300;						//清除极值
	} 
}

/*************************************LCD显示屏初始化****************************************/
void lcd_init(void)
{
	POINT_COLOR=RED;
	for(i=14;i<22;i++)  //显示机械振动检测波形
	{
		LCD_ShowHEAD(10 + i*34 - 14*34,10,32,32,i);				 
	}
	LCD_ShowString(260,63+12,200,16,16,"vpp/mv:");				//差值/毫伏
	LCD_ShowString(260,98+12,200,16,16,"max/mv:");				//采样周期内的最大值
	LCD_ShowString(260,133+12,200,16,16,"min/mv:");	  		//采样周期内的最小值
	LCD_ShowString(260,168+12,200,16,16,"f/Hz:");		  		//频率/Hz
	LCD_ShowString(260,203+12,200,16,16,"OSR/kHz:");  		//采样率

	POINT_COLOR=BLUE;
	lcd_huaxian(0,0,0,200);									//画4条边框线
	lcd_huaxian(256,0,256,200);
	lcd_huaxian(0,0,256,0);		
	lcd_huaxian(0,200,256,200);

	POINT_COLOR=BLUE;		

	LCD_ShowNum(265,220+12,Show_T,3,16);		//首次采集频率
}

/**********************************更新电压波形图*************************************/
void clear_point(void)
{
	u16 x=0;
	for(x=0;x<NPT/4 && clear_flag;x++)
	{	
		POINT_COLOR=WHITE;	
		lcd_huaxian(x  ,1,x  ,199);		//删除原始线条，除上下两条边框

		POINT_COLOR=BLUE;
		lcd_huaxian(0,0,0,200);				//画左边框
		lcd_huadian(x,100);						//画中线
				
		if(x == table[h])							//画刻度，横上、中、下线
		{
			lcd_huaxian(x,1,x,3);
			lcd_huaxian(x,101,x,103); 
			lcd_huaxian(x,199,x,197);
			h++;
			if(h>=16) h=0;
		}	
		if(x==128) 										//画刻度竖中线
		{
			lcd_huaxian(x,1,x,199);
		}
	  
		
		dataZhuanhuan(x);
	}
}

/*****************************************数据转换*****************************************/
void dataZhuanhuan(u16 x){
		u16 i = 0;
		float y = 0.0;
	  get_v = adcx[x]/U+(90-((adcmax-adcmin)/(2*U)));
		/*将ADC的值进行转化，转为电压值*/
		temp=adcx[x]*(3.3/4096);
		adcx[x] = temp;
		tmp_1 = adcx[x];
		temp -= adcx[x];
		tmp_1 += temp;
		tmp_1 *= 1000;											//得到毫伏
		/*计算加速度和速度*/
		preA = a;
	  Aflag = 1;
		if(x > 0 && pretmp_1 > tmp_1){
			Aflag = -1;
		}
		pretmp_1 = tmp_1;
		a = Aflag * (tmp_1 / k);						//计算得到加速度（用的毫伏计算的）
//		printf("加速度 %f\r\n", a);
//		printf("符号 %d\r\n", Aflag);
		sprintf(aStr, "%.4f", a);						//将得到的加速度转换为字符串形式
		v = tmp_1 / BL;											//计算得到振动传感器的速度,单位是mm/s
		sprintf(vStr, "%.1f", v);						//将得到的加速度转换为字符串形式
		sprintf(tmp, "%.1f", tmp_1);				//将得到的数据转化成字符串形式，然后传入到上位机
		
		/* 
			进行降噪故障诊断使用的数据是加速度
		*/
		MyNum[myI] = a;		
		myI++;
		if(myI == 1024){										//数组内存储的内容已满，需要进行降噪诊断
			//LCD_ShowString(350,45+24*7+24,200,24,24,"start");				//开始计算
			/**要进行MyFun降噪，MyFun1诊断是否存在故障**/
			MyFun(MyNum, MyNum2);				//得到MyNum2为进行降噪处理后的数据
			//LCD_ShowString(350,45+24*7+24,200,24,24,"wait ");				//计算结束
			/*
			 *时域分析		//计算时域特征，与正常齿轮时域特征进行对比（主要对比均方根值，峭度值，偏度）
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
			* 频域分析		计算频域特征，与正产齿轮频域特征进行对比（主要对比峰值因子，峰值因数，振幅因数）
			*/
			MyFun4(MyNum2, 12800, pinyu);
			//如何进行对比		时域角度NormalSkewness = 0.68, NormalKurtosis = 6.0, NormalCrestFactor = 5.3, NormalImpulseFactor = 7.0, NormalMarginFactor = 31.0; 
			//LCD_ShowString(350,45+24*7+24,200,24,24,"end  ");				//计算结束
			if(Skewness > NormalSkewness || Kurtosis > NormalKurtosis || CrestFactor > NormalCrestFactor || ImpulseFactor > NormalImpulseFactor || MarginFactor > NormalMarginFactor){
				//说明齿轮出现故障，进行报警		这里代码需要重新修正
				//BEEP=1;  			//蜂鸣器报警
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
			//频域角度：峰值因子，峰值因数，振幅因数
			if(pinyu[0] > 0.615 || pinyu[1] < 4.03 || pinyu[2] < 4.03){
				//说明齿轮出现故障，进行报警		这里代码需要重新修正
				//BEEP=1;  			//蜂鸣器报警
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_pinyu(175+i*34,40+24*8+24,24,24,i);
				}
				for(i = 0; i < 4; i++){
					POINT_COLOR = RED;
					LCD_Chilun(175+i*34,70+24*8+24,24,24,i);
				}
			}
			/**然后降噪诊断完成之后，要将下标myI重新置零，进行下一次检测**/
			myI = 0;
		}	

		length = NPT/4;
		sendchar[x] = tmp_1;								//发送到上位机的数据（这里是通过数组）
		data_Serial[x] = tmp_1;							//发送到串口的数据
		
		lcd_huaxian(x,save_v,x+1,get_v);		//画线，方便观察
		save_v = get_v;											//存储待用
}

/****************************************绘制频谱图*****************************************/
void ldc_show_fft(unsigned int *p){
		unsigned int *pp = p + 1;															//p+1相当于则直接把0HZ部分滤掉了
		for(i = 0; i < 480; i++){
			LCD_Fill(i, 319-*pp*0.11, (i+1), 319, RED);			    //有效部分显示白色
			LCD_Fill(i, 0, (i+1), 319-*pp*0.11,WHITE);		      //其他部分显示黑色
			pp++;
		}
}

/*************************************实时数据显示**************************************/
void LCDshow(void){
		POINT_COLOR = BLUE; 
		/*************************************串口通信***************************************/
		//将数据发送到串口(这里先进行注释，用来观察故障诊断方面的变化)
		Usart1_Send_Srting(tmp); 
		Usart1_Send_Srting(aStr);
		for(i=22;i<26;i++)  //实时显示
		{
		 LCD_ShowHEAD(100+i*34-15*34,10,32,32,i);			  
		}
		//显示速度
		for(i=0;i<4;i++)   //显示当前速度/加速度
		{
			LCD_Showsudu(350+i*26,45,24,24,i);		 	 
		}
		//显示加速度
		for(i=0;i<5;i++)   //显示当前速度/加速度
		{
			LCD_Showjiasudu(350+i*26,69+24,24,24,i); 			 
		}
		//显示电压
		for(i=2;i<7;i++)   //显示当前电压
		{	
		 LCD_Showdianya(350+i*26-2*26,46+24*4,24,24,i);	 		 
		}
		LCD_ShowString(350,45+24*4+24,200,24,24,"     mv");				//表示电压单位
		//显示频率
		for(i=0;i<4;i++)   //显示当前频率
		{
			LCD_ShowHz(350+i*26,46+24*6,24,24,i);	 		 
		}
		LCD_ShowString(350,45+24*6+24,200,24,24,"     Hz");				//表示频率单位 
}
/******************************************************************
函数名称:GetPowerMag()
函数功能:计算各次谐波幅值
参数说明:
备　　注:先将lBufOutArray分解成实部(X)和虚部(Y)，然后计算幅值(sqrt(X*X+Y*Y)
*******************************************************************/
void GetPowerMag(void)
{
		u16 temp = 0;
		float X,Y,IX,IY,Mag,magmax=0,sample_frequency  = 0;
		unsigned short i;
		//调用自cr4_fft_1024_stm32
		cr4_fft_1024_stm32(fftout, fftin, NPT);	
    for(i=1; i<NPT/2; i++)
    {
			X  = (fftout[i] << 16) >> 16;
      Y  = (fftout[i] >> 16);
				
			IX = NPT * ((float)X) / 32768;
			IY = NPT * ((float)Y) / 32768;	
			
      Mag = sqrt(IX * IX + IY * IY) / NPT;     		//幅值大小，取模
			
			if(i==0){
				FFT_Mag[i] = (unsigned long)(Mag * 32768);
			}else{
				FFT_Mag[i] = (unsigned long)(Mag * 65536);
			}
			//找出幅值最大的点
			if(Mag > magmax)
			{
				magmax = Mag;
				temp = i;
			}				
    }
	//除了直流分量幅值最大的点在数组中的位置，而这个点所对应的频率也就是我们采样波形的频率
		sample_frequency = 72000000.0 / (float)((Set_T) * (71 + 1));					
		if(Set_T ==   1000)		F=(u32)((double)sample_frequency*temp/NPT);			//采样频率为   1KHz
		if(Set_T == 156.25)		F=(u32)((double)sample_frequency*temp/NPT);			//采样频率为 6.4KHz
		if(Set_T ==    100)		F=(u32)((double)sample_frequency*temp/NPT);			//采样频率为  10KHz
		if(Set_T == 78.125)		F=(u32)((double)sample_frequency*temp/NPT);			//采样频率为12.8KHz
}


//坐标原点重定义画点
void lcd_huadian(u16 a,u16 b)			
{							    
	LCD_Fast_DrawPoint(a,240-b+12,BLUE);
}


//坐标原点重定义画线
void lcd_huaxian(u16 x1,u16 y1,u16 x2,u16 y2)	
{
	LCD_DrawLine(x1,240+12-y1,x2,240+12-y2);
}

//定时器3中断服务程序	
//每隔采样频率采样一次
void TIM3_IRQHandler(void)
{ 
	if(TIM3->SR&0X0001)//溢出中断
	{
		adcx[t]=Get_Adc(ADC_CH1);				//单次采样
//		adcx[t]=Get_Adc_Average(ADC_CH1,3);		//多次采样取均值		
		if(adcx[t] >= adcmax)		adcmax = adcx[t];		//获取极值
		if(adcx[t] <= adcmin)		adcmin = adcx[t];
		
		t++;
		if(t==NPT) 
		{
			t=0;
			adc_flag = 1;
			TIM3->CR1 &= (uint16_t)(~((uint16_t)0x0001));//失能定时器3	
		}
	}				   
	TIM3->SR&=~(1<<0);//清除中断标志位 	    
}


	//外部中断3服务程序
void EXTI3_IRQHandler(void)
{
	delay_ms(10);	//消抖
	if(KEY1==0)	 	//按键KEY1
	{	
		if(clear_flag == 1)
		{
			TIM3->CR1 &= (uint16_t)(~((uint16_t)0x0001));//失能定时器3					
			clear_flag=0;
			LCD_ShowString(8,275,200,16,16,"STOP  ");			
		}
		else
		{
			TIM3->CR1|=0x01;    //使能定时器3				
			clear_flag=1;
			LCD_ShowString(8,275,200,16,16,"WORK");
		}
		//while(KEY1==1);
	}		 
	EXTI->PR=1<<3;  //清除LINE3上的中断标志位  
}

//外部中断4服务程序
void EXTI4_IRQHandler(void)
{
	delay_ms(10);	//消抖
	if(KEY0==0)	 	//按键KEY0
	{
		POINT_COLOR=BLUE;		
		flag++;
		printf("%d", flag);
		LCD_ShowString(265,220+12,200,3,16,"       ");	
		if(flag==1)//采样频率为6.4khz
		{
			Set_T=156.25;
			Show_T = 6.4;
			sprintf(tmp_T, "%.1f", Show_T);
			LCD_ShowString(265,220+12,200,3,16,tmp_T);	
		}
		else if(flag==2)//采样频率为12.8khz
		{
			Set_T = 78.125;
			Show_T = 12.8;
			sprintf(tmp_T, "%.1f", Show_T);
			LCD_ShowString(265,220+12,200,3,16,tmp_T);		
		}
		else if(flag==3) //采样频率为100khz
		{
			Set_T=10;
			Show_T = 100;
			LCD_ShowNum(265,220+12,Show_T,3,16);	
		}
		else if(flag==4)//采样频率为1khz
		{
			Set_T=1000;
			Show_T = 1;
			LCD_ShowNum(265,220+12,Show_T,3,16);	
			flag=0;
		}
							   
		TIM3->ARR=(Set_T-1);  			//设定计数器自动重装值
		//while(KEY0==0);
	}
	EXTI->PR=1<<4;  					//清除LINE4上的中断标志位  
}		
//外部中断2服务程序
void EXTI2_IRQHandler(void)
{
	delay_ms(10);	//消抖
	if(KEY2==0)	 	//按键KEY2
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
	EXTI->PR=1<<2;  //清除LINE2上的中断标志位  
}   

//定时器6中断服务程序	 
void TIM6_IRQHandler(void)
{ 	
	static u16 intr=0;
	if(TIM6->SR&0X0001)		//溢出中断
	{
		intr++;
		if(intr==256)
			intr=0;
		switch (Wave_flag)
		{
			case 1:Dac1_Set_Vol(Square_table[intr]*12);		//DA输出
				break;
			case 2:Dac1_Set_Vol(Sin_table[intr]*12);		//DA输出
				break;
			case 3:Dac1_Set_Vol(Triangle_table[intr]*12);	//DA输出
				break;
			default :
				break;
		}
	}				   
	TIM6->SR&=~(1<<0);	//清除中断标志位 	    
}


////外部中断0服务程序
//void EXTI0_IRQHandler(void)
//{
//	delay_ms(10);	//消抖
//	if(WK_UP==1)	//WK_UP按键
//	{				 
//		if(Wave_flag==1)
//			Wave_flag=2;
//		else if(Wave_flag==2)
//			Wave_flag=3;
//		else if(Wave_flag==3)
//			Wave_flag=1;		
//		while(WK_UP==1);
//	}		 
//	EXTI->PR=1<<0;  //清除LINE0上的中断标志位  
//}


