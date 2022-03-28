//
// Created by master on 2022/3/28.
//

#ifndef MCU_LIB_CONFIG_H
#define MCU_LIB_CONFIG_H
#include "../hal/Inc/posix.h"

//#define USE_U8G2_LIB_SPI
//char u8g2_spi_send(uint8_t arg_int,void *arg_ptr);
////u8g2
//#ifdef  USE_U8G2_LIB_SPI
//#define OLED_DC_GPIO_Port 1
//#define OLED_DC_Pin 0
//#define OLED_RST_GPIO_Port 1
//#define OLED_RST_Pin 1
//#ifdef STM32_HAL_VERSION
//#define U8G2_SPI hspi1
//extern SPI_HandleTypeDef U8G2_SPI;
//#endif
//char u8g2_spi_send(uint8_t arg_int,void *arg_ptr);
//#endif

//end u8g2
#define U8G2_SPI hspi1
extern SPI_HandleTypeDef U8G2_SPI;
#define OLED_DC_GPIO_Port 1
#define OLED_DC_Pin 0
#define OLED_RST_GPIO_Port 1
#define OLED_RST_Pin 1
char u8g2_spi_send(uint8_t arg_int,void *arg_ptr);

#endif //MCU_LIB_CONFIG_H
