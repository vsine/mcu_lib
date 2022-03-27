cmake_minimum_required(VERSION 3.21)

project(lib)


# Add sub directories





add_subdirectory(u8g2)


add_library(lib::main ALIAS ${PROJECT_NAME})
