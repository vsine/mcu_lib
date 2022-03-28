#include "u8g2_com_stm32_hw_spi_hal.h"
#include "../lib_config.h"

uint8_t u8x8_byte_4wire_hw_spi(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int,void *arg_ptr)
{

    switch (msg)
    {
        case U8X8_MSG_BYTE_SEND:
          if (u8g2_spi_send( arg_int,arg_ptr))
                return 0;
        break;
        case U8X8_MSG_BYTE_INIT:
        break;
        case U8X8_MSG_BYTE_SET_DC:
            digitalWrite(OLED_DC_GPIO_Port, OLED_DC_Pin, arg_int);

        break;
        case U8X8_MSG_BYTE_START_TRANSFER:
        break;
        case U8X8_MSG_BYTE_END_TRANSFER:
        break;
        default:
    return 0;
  }
  return 1;
}

uint8_t u8x8_stm32_gpio_and_delay(U8X8_UNUSED u8x8_t *u8x8,U8X8_UNUSED uint8_t msg, U8X8_UNUSED uint8_t arg_int,U8X8_UNUSED void *arg_ptr)
{
    switch (msg)
    {
        case U8X8_MSG_GPIO_AND_DELAY_INIT:
            soft_delay(1);
        break;
        case U8X8_MSG_DELAY_MILLI:
            soft_delay(arg_int);
        break;
        case U8X8_MSG_GPIO_CS:
            //HAL_GPIO_WritePin(OLED_CS_GPIO_Port, OLED_CS_Pin, arg_int);
            break;
        case U8X8_MSG_GPIO_DC:
            digitalWrite(OLED_DC_GPIO_Port, OLED_DC_Pin, arg_int);
        break;
        case U8X8_MSG_GPIO_RESET:
            digitalWrite(OLED_RST_GPIO_Port, OLED_RST_Pin, arg_int);
        break;
    }
  return 1;
}


void u8g2Init(u8g2_t *u8g2)
{
    //四线spi 选择设备
    u8g2_Setup_ssd1306_128x64_noname_f(u8g2, U8G2_R0, u8x8_byte_4wire_hw_spi, u8x8_stm32_gpio_and_delay); // 初始化 u8g2 结构体
    
    //u8g2_Setup_ssd1309_128x64_noname0_f(u8g2, U8G2_R0, u8x8_byte_4wire_hw_spi, u8x8_stm32_gpio_and_delay);

    u8g2_InitDisplay(u8g2);                                                                       // 根据所选的芯片进行初始化工作，初始化完成后，显示器处于关闭状态
    u8g2_SetPowerSave(u8g2, 0);                                                                   // 打开显示器
    //u8g2_ClearBuffer(u8g2);
   
}
