//

//

#ifndef INC_411_POSIX_H
#define INC_411_POSIX_H

//mcu switch
#define STM32_HAL_VERSION


#ifdef STM32_HAL_VERSION
#include "stm32f4xx_hal.h"
#endif

//firmware header files
#include "../../task/Inc/create.h"
#include "gpio.h"
//put the function in your main function of mcu.
void into();


//posix


#endif //INC_411_POSIX_H
