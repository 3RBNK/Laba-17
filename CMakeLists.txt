cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c)

add_library(str string/string_.h string/string_.c
        string/task/remove_non_letters.h
        string/task/remove_adjacent_equal_letters.h
        string/task/reverse_word.h
        string/task/replace_digit_to_space.h
        string/task/replace_word_to_word.h
        string/task/lexicographical_order.h
        string/task/print_revers_ordered.h
        string/task/counter_palindrome_word.h
        string/task/rearranging_words.h
        string/task/letters_belong_string.h
        string/task/complement_string.h
        string/task/change_word_order.h
        string/task/print_word_before_first_word_with_a.h
        string/task/find_last_common_word.h
        string/task/find_duplicate_words.h
        string/task/get_word_except_last.h
        string/task/find_preceding-word.h
        string/task/remove_palindrome_word.h
)



target_link_libraries(code str)


