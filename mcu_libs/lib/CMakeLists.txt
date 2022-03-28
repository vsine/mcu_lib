cmake_minimum_required(VERSION 3.21)

project(lib)





add_subdirectory(u8g2)
file(GLOB_RECURSE SOURCES "lib_config.c")
add_library(${PROJECT_NAME} ${SOURCES})
add_library(lib::main ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ./)

target_link_libraries(${PROJECT_NAME} lib::u8g2)