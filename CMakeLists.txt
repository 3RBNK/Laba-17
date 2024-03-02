cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c)

add_library(str string/string_.h string/string_.c)



target_link_libraries(code str)


