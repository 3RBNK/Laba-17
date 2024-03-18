//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_REARRANGING_WORDS_H
#define CODE_REARRANGING_WORDS_H

#include "../string_.h"


void append_word(char* result, word_descriptor* word) {
    char* ptr = result;
    while (*ptr != '\0') {
        ptr++;
    }

    char* start = word->begin;
    while (*start != *word->end) {
        *ptr = *start;
        ptr++;
        start++;
    }

    *ptr = ' ';
    ptr++;
    *ptr = '\0';
}


void merge_words(char* s1, char* s2, char* result) {
    word_descriptor word1, word2;
    bool isW1Found, isW2Found;
    char *beginSearch1 = s1, *beginSearch2 = s2;

    while ((isW1Found = get_word(beginSearch1, &word1)),
            (isW2Found = get_word(beginSearch2, &word2)),
            isW1Found || isW2Found) {
        if (isW1Found) {
            append_word(result, &word1);
            beginSearch1 = word1.end;
        }
        if (isW2Found) {
            append_word(result, &word2);
            beginSearch2 = word2.end;
        }
    }
}


#endif //CODE_REARRANGING_WORDS_H
