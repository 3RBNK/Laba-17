//
// Created by Kirill on 02.03.2024.
//

#ifndef CODE_STRING__H
#define CODE_STRING__H

#include <stdio.h>
#include <stdbool.h>


size_t strlen_(const char* begin);


char* find(char *begin, char* end, int ch);


char* find_non_space(char* begin);


char* find_space(char* begin);


char* find_non_space_reverse(char* r_begin, const char* r_end);


char* find_space_reverse(char* r_begin, const char* r_end);


int is_equal_string(const char* lhs, const char* rhs);


char* copy(const char* begin_source, const char* end_source, char* begin_destination);


char* copy_if(const char* begin_source, const char* end_source, char* begin_destination, int (*f)(int));


char* copy_if_reverse(const char* r_begin_source, const char* r_end_source, char* begin_destination, int (*f)(int));

#endif //CODE_STRING__H
