//
// Created by master on 2022/3/28.
//

#ifndef MCU_LIB_CONFIG_H
#define MCU_LIB_CONFIG_H

#include "../hal/Inc/posix.h"

//u8g2
#ifdef STM32_HAL_VERSION
#define OLED_DC_GPIO_Port 3
#define OLED_DC_Pin 13
#define OLED_RST_GPIO_Port 3
#define OLED_RST_Pin 13
#endif

//end u8g2


#endif //MCU_LIB_CONFIG_H
