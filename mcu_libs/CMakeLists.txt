

#   Copyright 2022 Xiaowen Mao	mao@qvqol.cn

# 	The MCU firmware is free software: you can redistribute it and/or modify
#   it under the terms of the MIT General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.

#   The MCU firmware is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   MIT General Public License for more details.

#   How to make it work?
#   Add add_subdirectory(muc_libs) in your CMakeLists.txt also the line of code need to be before add_executable of function.
#   Add target_link_libraries(${PROJECT_NAME}.elf mcu::libs) is behind add_executable.
#   In main function,you can include the bootstrap code,example: #include "hal/Inc/posix.h"
#   And then put the into function of posix heads files in your main function.
#   Next step,modify posix.h,replace your define of mcu.


project (mcu_libs)
file(GLOB_RECURSE SOURCES "task/*.c" "hal/*.c")
add_library(${PROJECT_NAME} ${SOURCES})
add_library(mcu::libs ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ./)





