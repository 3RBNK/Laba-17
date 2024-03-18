//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_BALANCE_STRING_H
#define CODE_BALANCE_STRING_H

#include "../string_.h"


void complement_string(char* s1, char* s2, size_t n) {
    char* begin_search = s2;
    bag_of_words words = {.size = 0};

    while (get_word(begin_search, &words.words[words.size])) {
        begin_search = words.words[words.size].end + 1;
        words.size++;
    }

    char* rec_ptr = get_end_of_string(s1);
    *rec_ptr++ = ' ';

    for (size_t i = words.size - n; i < words.size; i++) {
        rec_ptr = copy(words.words[i].begin, words.words[i].end, rec_ptr);
        if (i != words.size - 1)
            *rec_ptr++ = ' ';
    }
}


void balance_string(char* s1, size_t n1, char* s2, size_t n2) {
    if (n1 < n2)
        complement_string(s1, s2, n2 - n1);
    else if (n1 > n2)
        complement_string(s2, s1, n1 - n2);
}


#endif //CODE_BALANCE_STRING_H
