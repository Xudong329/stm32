#include "stm32f10x.h"


int main(void)
{	

	RCC->APB2ENR|=( (1) << 3 );//RCC, IOPB enable
	
	//red light
//	GPIOB->CRL |= ( (1) << (5*4) );//CRL, set IO as output with 10MHz push-pull
//	GPIOB->ODR &= ~(1<<5);//ODR register enable(red light(PB5))
	
	//blue light
	GPIOB->CRL |= ( (1) << (1*4) );//CRL, set IO as output with 10MHz push-pull
	GPIOB->ODR	&= ~(1<<1);//ODR register enable(blue light(PB1))
	
	
	//green light
//	GPIOB->CRL |= ( (1) << (0*4) );//CRL, set IO as output with 10MHz push-pull
//	GPIOB->ODR &= ~(1<<0);//ODR register enable(green light(PB0))
}

//set: |=(1<<n)
//reset: &=~(1<<n)

/*********************************************END OF FILE**********************/

void SystemInit(void){//empty method for eliminate compile warning.

}
