//
// Created by master on 2022/3/26.
//

#ifndef MCU_LIB_GPIO_H
#define MCU_LIB_GPIO_H
#include "posix.h"
void test();
void digitalWrite(GPIO_TypeDef* GPIOx,uint16_t pin,GPIO_PinState PinState);
//void digitalWrite(unsigned int pin);
#endif //MCU_LIB_GPIO_H
