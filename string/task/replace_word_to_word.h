//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REPLACE_WORD_TO_WORD_H
#define CODE_REPLACE_WORD_TO_WORD_H

#include "../string_.h"


int compare(char* lhs, char* rhs, size_t size) {
    size_t i = 0;
    while (i != size && *lhs == *rhs) {
        i++;
        lhs++;
        rhs++;
    }

    if (i == size)
        return 1;
    return 0;
}



void replace(char* source, char* w1, char* w2) {
    size_t w1_size = strlen_(w1);
    size_t w2_size = strlen_(w2);

    word_descriptor word1 = {w1, w1 + w1_size};
    word_descriptor word2 = {w2, w2 + w2_size};

    char *read_ptr;
    char *rec_ptr;

    if (w1_size >= w2_size) {
        read_ptr = source;
        rec_ptr = source;
    } else {
        copy(source, get_end_of_string(source), _string_buffer);
        read_ptr = _string_buffer;
        rec_ptr = source;
    }

    while (*read_ptr != '\0') {
        if (compare(read_ptr, word1.begin, word1.end - word1.begin)) {
            copy(word2.begin, word2.end, rec_ptr);
            rec_ptr += word2.end - word2.begin;
            read_ptr += word1.end - word1.begin;
        } else {
            *rec_ptr = *read_ptr;
            rec_ptr++;
            read_ptr++;
        }
    }

    *rec_ptr = '\0';
}


#endif //CODE_REPLACE_WORD_TO_WORD_H
