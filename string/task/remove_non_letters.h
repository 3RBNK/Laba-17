//
// Created by Kirill on 08.03.2024.
//

#ifndef CODE_REMOVE_NON_LETTERS_H
#define CODE_REMOVE_NON_LETTERS_H

#include <ctype.h>
#include "../string_.h"


void remove_non_letters(char* s) {
    char* end = get_end_of_string(s);
    char* destination = copy_if(s, end, s, isgraph);

    *destination = '\0';
}

#endif //CODE_REMOVE_NON_LETTERS_H
