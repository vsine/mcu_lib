//
// Created by master on 2022/3/26.
//

#include "../Inc/posix.h"

void into(){
    create();
    while (1)
        loop();
}

void soft_delay(unsigned int ms){
#ifdef STM32_HAL_VERSION
    HAL_Delay(ms);
#endif
}


