# include "stm32f10x.h"
# include "BSP_LED.h"
# include "BSP_KEY.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);

}


int main(void) {
	
	LED_GPIO_B_Config();
	KEY_GPIO_Config();
	
	while(1)
	{
		if(Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN)==KEY_ON)
		{
			LED_B_TOGGLE;
		}
	}
	
	
	
} 

