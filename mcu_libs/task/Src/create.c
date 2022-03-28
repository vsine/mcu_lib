//
// Created by master on 2022/3/26.
//

#include "../Inc/create.h"

#include "u8g2.h"
#include "u8g2_com_stm32_hw_spi_hal.h"

u8g2_t u8g2;
void create(){
    HAL_Delay(100);
    u8g2Init(&u8g2);
    u8g2_ClearBuffer(&u8g2);
    u8g2_DrawLine(&u8g2,50,20,60,19);
    u8g2_SendBuffer(&u8g2);
    //HAL_Delay(1000);
}

void loop(){
    soft_delay(1000);
    digitalWrite(2,13,1);
    soft_delay(1000);
    digitalWrite(2,13,0);
    HAL_Delay(100);
    u8g2Init(&u8g2);
    u8g2_ClearBuffer(&u8g2);
    u8g2_DrawLine(&u8g2,50,20,60,19);
    u8g2_SendBuffer(&u8g2);
}