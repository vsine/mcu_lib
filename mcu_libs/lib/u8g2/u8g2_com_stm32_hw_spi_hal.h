#ifndef U8G2_COM_STM32_HW_SPI_HAL_H
#define U8G2_COM_STM32_HW_SPI_HAL_H

#include "u8g2.h"
#define OLED_ADDRESS 0x78
extern uint8_t u8x8_byte_4wire_hw_spi(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern uint8_t u8x8_gpio_and_delay(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr);
extern void u8g2Init(u8g2_t *u8g2);
#endif