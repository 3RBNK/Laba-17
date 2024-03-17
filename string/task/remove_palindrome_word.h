//
// Created by Kirill on 17.03.2024.
//

#ifndef CODE_REMOVE_PALINDROME_WORD_H
#define CODE_REMOVE_PALINDROME_WORD_H

#include "../string_.h"


bool is_palindrome_word(word_descriptor* word) {
    char* start = word->begin;
    char* end = word->end - 1;

    while (start < end) {
        if (*start != *end)
            return false;

        start++;
        end--;
    }

    return true;
}


void remove_palindrome_word(char* s) {
    char* read_begin = _string_buffer;
    char* read_end = copy(s, s + strlen_(s), _string_buffer);
    char* rec_ptr = s;

    word_descriptor word;
    while (get_word(read_begin, &word)) {
        if (!is_palindrome_word(&word)) {
            rec_ptr = copy(word.begin, word.end, rec_ptr);

            if (word.end !=  read_end)
                *rec_ptr++ = ' ';
        }
        read_begin = word.end + 1;
    }
    *rec_ptr = '\0';
}

#endif //CODE_REMOVE_PALINDROME_WORD_H
