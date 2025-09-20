#include "MyLED.h"
  
void MyLED_Init(void)
{
  
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	//现在所有GPIO外设都连接在AHB1总线上
	//曾经的APB2总线不再控制GPIO口	RCC_APB2PeriphClockCmd(uint32_t RCC_APB2Periph, FunctionalState NewState)
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;				//选择Pin
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		//选择速度
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;			//选择模式	输入 输出 复用 模拟
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;			//选择类型，推挽输出 开漏输出
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;		//选择输入，上拉输入 下拉输入 不拉
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	
}
