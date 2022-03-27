//
// Created by master on 2022/3/28.
//

#ifndef MCU_LIB_CONFIG_H
#define MCU_LIB_CONFIG_H

#include "../hal/Inc/posix.h"

//u8g2
#ifdef STM32_HAL_VERSION
#define OLED_DC_GPIO_Port GPIOC
#define OLED_DC_Pin GPIO_PIN_13
#define  OLED_RST_GPIO_Port GPIOC
#define OLED_RST_Pin GPIO_PIN_13
#endif
void u8g2_gpio_dc(char set);
void u8g2_gpio_rst(char set);
//end u8g2


#endif //MCU_LIB_CONFIG_H
