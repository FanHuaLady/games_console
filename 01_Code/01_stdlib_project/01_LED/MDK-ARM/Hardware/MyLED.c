#include "MyLED.h"
  
void MyLED_Init(void)
{
  
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	//��������GPIO���趼������AHB1������
	//������APB2���߲��ٿ���GPIO��	RCC_APB2PeriphClockCmd(uint32_t RCC_APB2Periph, FunctionalState NewState)
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;				//ѡ��Pin
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		//ѡ���ٶ�
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;			//ѡ��ģʽ	���� ��� ���� ģ��
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;			//ѡ�����ͣ�������� ��©���
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;		//ѡ�����룬�������� �������� ����
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
}
