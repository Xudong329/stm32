#include "stm32f10x.h"
// There are some defined variables in the header file, but in this very beginning project I didn't use them.

//0x0x40010C00 is GPIOB base address
//

int main(void)
{	
	
	//those are for green light(PB0)
	//*( unsigned int * )0x40021018 |=( (1) << 3 );//RCC, IOPB enable
	
	//*( unsigned int * )0x40010C00 |= ( (1) << (0*4) );//CRL, set IO as output with 10MHz push-pull
	
	//*( unsigned int * )0x40010C0C &= ~(1<<0);//ODR register enable
	
	//Here are for red light(PB5)
	//*( unsigned int * )0x40021018 |=( (1) << 3 );//RCC, IOPB enable
	
	//*( unsigned int * )0x40010C00 |= ( (1) << (5*4) );//CRL, set IO as output with 10MHz push-pull
	
	//*( unsigned int * )0x40010C0C &= ~(1<<5);//ODR register enable
	
	//Below are for blue light(PB1)
	*( unsigned int * )0x40021018 |=( (1) << 3 );//RCC, IOPB enable
	
	*( unsigned int * )0x40010C00 |= ( (1) << (1*4) );//CRL, set IO as output with 10MHz push-pull
	
	*( unsigned int * )0x40010C0C &= ~(1<<1);//ODR register enable
}

//set: |=(1<<n)
//reset: &=~(1<<n)

/*********************************************END OF FILE**********************/

void SystemInit(void){//empty method for eliminate compile warning.

}
