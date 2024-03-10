//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_LETTERS_BELONG_STRING_H
#define CODE_LETTERS_BELONG_STRING_H

#define LETTERS_SHIFT 97


#include "../string_.h"

bool letters_belong_string(char* string, char* word) {
    bool include[26] = {0};

    char* start = string;
    char* end = get_end_of_string(string);

    while (start != end) {
        if (isalpha(*start))
            include[*start - LETTERS_SHIFT] = true;

        start++;
    }

    char* start_word = word;
    char* end_word = get_end_of_string(word);

    while (start_word != end_word) {
        if (!include[*start_word - LETTERS_SHIFT])
            return false;

        start_word++;
    }

    return true;

}

#endif //CODE_LETTERS_BELONG_STRING_H
