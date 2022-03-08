#include "gpio.h"

void GPIO_set_bit(GPIO_UNION* GPIO, unsigned short GPIO_PIN){
	GPIO->BSRR |= GPIO_PIN;
} 

void GPIO_clear_bit(GPIO_UNION* GPIO, unsigned short GPIO_PIN){
	GPIO->BRR |= GPIO_PIN;
}

