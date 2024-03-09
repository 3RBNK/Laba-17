//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REMOVE_ADJACENT_EQUAL_LETTERS_H
#define CODE_REMOVE_ADJACENT_EQUAL_LETTERS_H

#include <ctype.h>

void remove_adjacent_equal_letters(char* s) {
    char* i_write = s;
    char* i_read = s;
    char last_symbol = *s;

    while (*i_read != '\0') {
        while (*i_read == last_symbol)
            i_read++;

        *i_write = last_symbol;
        i_write++;
        last_symbol = *i_read;
    }

    *i_write = '\0';
}

#endif //CODE_REMOVE_ADJACENT_EQUAL_LETTERS_H
