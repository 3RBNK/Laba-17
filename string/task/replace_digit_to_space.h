//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REPLACE_DIGIT_TO_SPACE_H
#define CODE_REPLACE_DIGIT_TO_SPACE_H

#include "remove_non_letters.h"
#include "../string_.h"


#define ASCII_SHIFT_FOR_DIGIT 48


void replace_digit_to_space(char* s) {
    char* rec_ptr = s;
    char* read_ptr = _string_buffer;

    char* end = get_end_of_string(s);
    char* end_in_buff = copy(s, end, _string_buffer);
    *end_in_buff = '\0';

    while (*read_ptr != '\0') {
        if (isdigit(*read_ptr))
            for (int i = 0; i < *read_ptr - ASCII_SHIFT_FOR_DIGIT; i++) {
                *rec_ptr = ' ';
                rec_ptr++;
            }
        else {
            *rec_ptr = *read_ptr;
            rec_ptr++;
        }

        read_ptr++;
    }

    *rec_ptr = '\0';
}


#endif //CODE_REPLACE_DIGIT_TO_SPACE_H
