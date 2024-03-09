//
// Created by Kirill on 02.03.2024.
//

#ifndef CODE_STRING__H
#define CODE_STRING__H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>


#define MAX_STRING_SIZE 200
#define MAX_N_WORDS_IN_STRING 100
#define MAX_WORD_SIZE 20

extern char _string_buffer[MAX_STRING_SIZE + 1];


typedef struct word_descriptor {
    char* begin;
    char* end;
} word_descriptor;


typedef struct bag_of_words {
    word_descriptor words[MAX_N_WORDS_IN_STRING];
    size_t size;
} bag_of_words;

extern bag_of_words _bag;
extern bag_of_words _bag2;

size_t strlen_(const char* begin);


char* find(char *begin, char* end, int ch);


char* find_non_space(char* begin);


char* find_space(char* begin);


char* find_non_space_reverse(char* r_begin, const char* r_end);


char* find_space_reverse(char* r_begin, const char* r_end);


int is_equal_string(const char* lhs, const char* rhs);


char* copy(const char* begin_source, const char* end_source, char* begin_destination);


char* copy_if(const char* begin_source, const char* end_source, char* begin_destination, int (*f)(int));


char* copy_if_reverse(const char* r_begin_source, const char* r_end_source, char* begin_destination, int (*f)(int));


char* get_end_of_string(char* s);


bool get_word(char* begin_search, word_descriptor* word);

#endif //CODE_STRING__H
