//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_CHANGE_WORD_ORDER_H
#define CODE_CHANGE_WORD_ORDER_H

#include <string.h>
#include "../string_.h"


void print_word(word_descriptor word) {
    while (word.begin != word.end) {
        printf("%c", *word.begin);
        word.begin++;
    }
    printf("\n");
}
/*
 *     printf("%s\n", s);

    printf("%c %c\n", *s, *(s + strlen_(s) - 1));

            printf("%c %c\n", *r_buffer_end, *r_buffer_begin);
    printf("%p %p %lld\n", r_buffer_end, r_buffer_begin, r_buffer_begin - r_buffer_end);
    printf("\n");

                printf("%p %p\n", word.begin, word.end);

        printf("%p %p\n", word.begin, word.end);
        printf("%c %c\n", *word.begin, *word.end);
        printf("\n");*/


void change_word_order(char *s) {
    printf("%s\n", s);
    printf("%p\n", s);

    char* rec_ptr = s;

    char* r_buffer_begin = copy(s, s + strlen_(s), _string_buffer);
    char* r_buffer_end = _string_buffer;

    word_descriptor word;
    while (get_word_reverse(r_buffer_begin, r_buffer_end, &word)) {
        rec_ptr = copy(word.begin, word.end, rec_ptr);
        if (word.begin != r_buffer_end) {
            *rec_ptr = ' ';
            rec_ptr++;
        }

        r_buffer_begin = word.begin - 2;
    }

    *rec_ptr = '\0';
}


#endif //CODE_CHANGE_WORD_ORDER_H
