//
// Created by master on 2022/3/26.
//

#include "../Inc/create.h"

void create(){
    //HAL_Delay(1000);
}

void loop(){
    soft_delay(1000);
    HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,1);
    soft_delay(1000);
    digitalWrite(2,13,0);
}