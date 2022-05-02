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
    u8g2_SetFont(&u8g2, u8g2_font_10x20_mf);
    u8g2_ClearBuffer(&u8g2);
    u8g2_DrawLine(&u8g2,50,20,60,19);
    u8g2_SendBuffer(&u8g2);
    //HAL_Delay(1000);
}
char  t=0;
void loop(){
    HAL_Delay(100);
    u8g2_ClearBuffer(&u8g2);
    u8g2_DrawStr(&u8g2,20,50,"sce");
    if(++t >= 32) t = 1;
    u8g2_DrawCircle(&u8g2,64,32,t,U8G2_DRAW_ALL);
    u8g2_DrawCircle(&u8g2,32,32,t,U8G2_DRAW_ALL);
    u8g2_DrawCircle(&u8g2,96,32,t,U8G2_DRAW_ALL);
    u8g2_SendBuffer(&u8g2);
}