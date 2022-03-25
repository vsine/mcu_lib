//
// Created by master on 2022/3/26.
//

#include "../Inc/create.h"

void create(){
    //HAL_Delay(1000);
}
void loop(){
    HAL_Delay(1000);
    HAL_GPIO_TogglePin(GPIOC,GPIO_PIN_13);
}