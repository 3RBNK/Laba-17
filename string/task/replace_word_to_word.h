//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REPLACE_WORD_TO_WORD_H
#define CODE_REPLACE_WORD_TO_WORD_H

#include "../string_.h"


bool get_word(char* begin_search, word_descriptor* word) {
    word->begin = find_non_space(begin_search);
    if (*word->begin == '\0')
        return false;

    word->end = find_space(word->begin);

    return true;
}


void replace(char* source, char* w1, char* w2) {
    size_t w1_size = strlen_(w1);
    size_t w2_size = strlen_(w2);

    word_descriptor word1 = {w1, w1 + w1_size};
    word_descriptor word2 = {w2, w2 + w2_size};

    char* read_ptr;
    char* rec_ptr;

    if (w1_size >= w2_size) {
        read_ptr = source;
        rec_ptr = source;
    } else {
        copy(source, get_end_of_string(source), _string_buffer);
        read_ptr = _string_buffer;
        rec_ptr = source;
    }


    word_descriptor word;
//    while (get_word(rec_ptr, &word)) {
//        if (is_equal_string(word1.begin, word.))
//    }
//}

#endif //CODE_REPLACE_WORD_TO_WORD_H
