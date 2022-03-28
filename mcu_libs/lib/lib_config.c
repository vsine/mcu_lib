//
// Created by master on 2022/3/28.
//
#include "lib_config.h"

#ifdef  USE_U8G2_LIB_SPI
char u8g2_spi_send(uint8_t arg_int,void *arg_ptr){
    #ifdef STM32_HAL_VERSION
    if(HAL_SPI_Transmit(&U8G2_SPI,arg_ptr,arg_int,1000)==HAL_OK)
        return 1;
    else
        return 0;
    #endif
}
#endif