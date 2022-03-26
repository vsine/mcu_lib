project (mcu_libs)


# Add a library with the above sources
file(GLOB_RECURSE SOURCES "task/*.c" "hal/*.c")
add_library(${PROJECT_NAME} ${SOURCES})
add_library(mcu::libs ALIAS ${PROJECT_NAME})


target_include_directories(${PROJECT_NAME} PUBLIC ./)
