#ifndef __GPIO_H
#define __GPIO_H

#include "stm32f10x.h"

#define GPIO_Pin_0 ((unsigned short) 0x0001)
#define GPIO_Pin_1 ((unsigned short) 0x0002)
#define GPIO_Pin_2 ((unsigned short) 0x0004)
#define GPIO_Pin_3 ((unsigned short) 0x0008)
#define GPIO_Pin_4 ((unsigned short) 0x0010)
#define GPIO_Pin_5 ((unsigned short) 0x0020)
#define GPIO_Pin_6 ((unsigned short) 0x0040)
#define GPIO_Pin_7 ((unsigned short) 0x0080)
#define GPIO_Pin_8 ((unsigned short) 0x0100)
#define GPIO_Pin_9 ((unsigned short) 0x0200)
#define GPIO_Pin_10 ((unsigned short) 0x0400)
#define GPIO_Pin_11 ((unsigned short) 0x0800)
#define GPIO_Pin_12 ((unsigned short) 0x1000)
#define GPIO_Pin_13 ((unsigned short) 0x2000)
#define GPIO_Pin_14 ((unsigned short) 0x4000)
#define GPIO_Pin_15 ((unsigned short) 0x8000)
#define GPIO_Pin_ALL ((unsigned short) 0xFFFF)

void gpio_set_bit(GPIO_UNION* GPIO, unsigned short content);
void gpio_clear_bit(GPIO_UNION* GPIO, unsigned short content);
#endif

