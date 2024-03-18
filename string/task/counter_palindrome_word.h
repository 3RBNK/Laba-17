//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_COUNTER_PALINDROME_WORD_H
#define CODE_COUNTER_PALINDROME_WORD_H


#include "../string_.h"


int get_separate_word(char* begin_search, word_descriptor* word) {
    word->begin = find_non_space(begin_search);
    if (*word->begin == '\0')
        return false;

    word->end = find_space(word->begin);

    if (ispunct(*(word->end - 1)))
        word->end--;

    return true;
}


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


int counter_palindrome_words(char* s) {
    int amount_palindrome = 0;
    char* begin_search = s;
    word_descriptor word;

    while (get_separate_word(begin_search, &word)) {
        if (is_palindrome_word(&word))
            amount_palindrome++;

        if (ispunct(*(word.end)))
            word.end++;

        begin_search = word.end;
    }

    return amount_palindrome;
}


#endif //CODE_COUNTER_PALINDROME_WORD_H
