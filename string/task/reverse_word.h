//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REVERSE_WORD_H
#define CODE_REVERSE_WORD_H

#include "../string_.h"


void digit_to_start(word_descriptor word) {
    char* end_string_buffer = copy(word.begin, word.end, _string_buffer);

    char* res_position = copy_if_reverse(end_string_buffer - 1, _string_buffer - 1, word.begin, isdigit);

    copy_if(_string_buffer, end_string_buffer, res_position, isalpha);
}


void inverted_digit_to_start_letters_to_end(char* s) {
    char* begin_search = s;
    word_descriptor word;

    while (get_word(begin_search, &word)) {
        digit_to_start(word);
        begin_search = word.end;
    }
}


void reverse_word(word_descriptor word) {
    char* start = word.begin;
    char* end = word.end - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


void reverse_word_in_string(char* s) {
    char* begin_search = s;
    word_descriptor word;

    while (get_word(begin_search, &word)) {
        reverse_word(word);
        begin_search = word.end;
    }
}


#endif //CODE_REVERSE_WORD_H
