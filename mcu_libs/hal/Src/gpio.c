//
// Created by master on 2022/3/26.
//

#include "../Inc/gpio.h"

#ifdef STM32_HAL_VERSION
uint16_t pins[]={GPIO_PIN_0,GPIO_PIN_1,GPIO_PIN_2,GPIO_PIN_3,GPIO_PIN_4,
                 GPIO_PIN_5,GPIO_PIN_6,GPIO_PIN_7,GPIO_PIN_8,GPIO_PIN_9,
                 GPIO_PIN_10,GPIO_PIN_11,GPIO_PIN_12,GPIO_PIN_13,GPIO_PIN_14,
                 GPIO_PIN_15,GPIO_PIN_All};
GPIO_TypeDef* ports[]={GPIOA,GPIOB,GPIOC,GPIOD,GPIOE,GPIOH};
GPIO_PinState pinState[]={GPIO_PIN_RESET,GPIO_PIN_SET};
#endif

void digitalWrite(char port,char pin,char PinState){
#ifdef STM32_HAL_VERSION
    HAL_GPIO_WritePin(ports[port],pins[pin],pinState[PinState]);
#endif
}