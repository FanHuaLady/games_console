#include <stm32f4xx.h>
#include "MyLED.h"

int main()
{
	MyLED_Init();//初始化LED
	GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	while(1)
	{
		
	}
}
