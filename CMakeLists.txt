cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c)

add_library(str string/string_.h string/string_.c
        string/task/remove_non_letters.h
        string/task/remove_adjacent_equal_letters.h
        string/task/reverse_word.h)



target_link_libraries(code str)


