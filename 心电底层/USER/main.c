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
// ADC1ת���ĵ�ѹֵͨ��MDA��ʽ����SRAM
extern __IO uint16_t ADC_ConvertedValue;

// �ֲ����������ڱ���ת�������ĵ�ѹֵ 	 
int ADC_ConvertedValueLocal; 
//��ʾATK-HC05ģ�������״̬
void HC05_Role_Show(void)
{
	
	if(HC05_Get_Role()==1)printf("ROLE:Master \n");	//����
	else printf("ROLE:Slave \n");			 		//�ӻ�
	/*4. ��������������*/
	if(HC05_Set_Cmd("AT+NAME=HEATR"))printf("4 ������������ʧ��!\r\n");
	else printf("4 ������������Ϊ HEATR \r\n");
	/*5. ���������������*/
	if(HC05_Set_Cmd("AT+PSWD=1234"))printf("5 ���������������ʧ��!\r\n"); //���������4λ
	else printf("5 ���������������Ϊ 1234 \r\n");
}
//��ʾATK-HC05ģ�������״̬
void HC05_Sta_Show(void)
{												 
	if(HC05_LED)printf("STA:Connected \r\n");			//���ӳɹ�
	else printf("STA:Disconnect \r\n");	 			//δ����				 
}	

 int main(void)
 {	
	 
	 
}
