# include "stm32f10x.h"
# include "BSP_LED.h"

void Delay(uint32_t count)
{
	for(;count!=0;count--);

}


int main(void) {

	
	
	while(1)
	{
		LED_GPIO_G_Config();
		LED_G(OFF);
		Delay(0xFFFFFF);
		LED_G(ON);
		Delay(0xFFFFFF);
		
		LED_GPIO_B_Config();
		LED_B(OFF);
		Delay(0xFFFFFF);
		LED_B(ON);
		Delay(0xFFFFFF);
		
		LED_GPIO_R_Config();
		LED_R(OFF);
		Delay(0xFFFFFF);
		LED_R(ON);
		Delay(0xFFFFFF);
	}
	
	
	
} 

