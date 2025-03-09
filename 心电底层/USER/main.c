#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "lcd.h"
#include "usart.h"
#include "hc05.h"
#include "usart3.h"			 	 
#include "string.h"	   
#include "usmart.h"	
#include "bsp_adc.h"
// ADC1转换的电压值通过MDA方式传到SRAM
extern __IO uint16_t ADC_ConvertedValue;

// 局部变量，用于保存转换计算后的电压值 	 
int ADC_ConvertedValueLocal; 
//显示ATK-HC05模块的主从状态
void HC05_Role_Show(void)
{
	
	if(HC05_Get_Role()==1)printf("ROLE:Master \n");	//主机
	else printf("ROLE:Slave \n");			 		//从机
	/*4. 设置蓝牙的名称*/
	if(HC05_Set_Cmd("AT+NAME=HEATR"))printf("4 蓝牙名称设置失败!\r\n");
	else printf("4 蓝牙名称设置为 HEATR \r\n");
	/*5. 设置蓝牙配对密码*/
	if(HC05_Set_Cmd("AT+PSWD=1234"))printf("5 蓝牙配对密码设置失败!\r\n"); //密码必须是4位
	else printf("5 蓝牙配对密码设置为 1234 \r\n");
}
//显示ATK-HC05模块的连接状态
void HC05_Sta_Show(void)
{												 
	if(HC05_LED)printf("STA:Connected \r\n");			//连接成功
	else printf("STA:Disconnect \r\n");	 			//未连接				 
}	

 int main(void)
 {	
	 
	 
}
