//
// Created by Kirill on 13.03.2024.
//

#ifndef CODE_PRINT_WORD_BEFORE_FIRST_WORD_WITH_A_H
#define CODE_PRINT_WORD_BEFORE_FIRST_WORD_WITH_A_H

#include "../string_.h"


bool is_letters_in_word(word_descriptor word, char letters) {
    char* start = word.begin;

    while (start != word.end) {
        if (*start == letters)
            return true;

        start++;
    }

    return false;
}


int print_word_before_first_word_a(char* s) {
    char* begin_search = s;

    word_descriptor word1;
    if (!get_word(begin_search, &word1)) {
        printf("Empty string\n");
        return 0;
    }
    begin_search = word1.end + 1;




    if (is_letters_in_word(word1, 'a') || is_letters_in_word(word1, 'A')) {
        printf("Word with a first");
        return 1;
    }

    word_descriptor word2;
    while (get_word(begin_search, &word2)) {
        if (is_letters_in_word(word2, 'a') || is_letters_in_word(word2, 'A')) {
            print_word(word1);
            return 3;
        }

        word1 = word2;

        begin_search = word2.end + 1;
    }

    printf("A not in string");
    return 2;
}

#endif //CODE_PRINT_WORD_BEFORE_FIRST_WORD_WITH_A_H
