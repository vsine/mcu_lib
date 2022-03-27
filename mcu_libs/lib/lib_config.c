//
// Created by master on 2022/3/28.
//
#include "lib_config.h"
void u8g2_gpio_dc(char set){
#ifdef STM32_HAL_VERSION
    HAL_GPIO_TogglePin()
#endif
}
void u8g2_gpio_rst(char set){}