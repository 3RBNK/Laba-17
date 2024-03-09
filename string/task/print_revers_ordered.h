//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_PRINT_REVERS_ORDERED_H
#define CODE_PRINT_REVERS_ORDERED_H

#include "../string_.h"


void get_bag_of_words(bag_of_words* bag, char* s) {
    char* begin_search = s;
    bag->size = 0;

    while (get_word(begin_search, &bag->words[bag->size])) {
        begin_search = bag->words[bag->size].end;

        bag->size++;
    }
}


void print_word(word_descriptor word) {
    while (word.begin != word.end) {
        printf("%c", *word.begin);
        word.begin++;
    }
    printf("\n");
}


void print_reverse_ordered(bag_of_words* bag, char* s) {
    get_bag_of_words(bag, s);

    for (int i = bag->size - 1; i >= 0; i--)
        print_word(bag->words[i]);
}


#endif //CODE_PRINT_REVERS_ORDERED_H
