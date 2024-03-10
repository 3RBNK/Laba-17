//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_REPLACE_WORD_TO_WORD_H
#define CODE_REPLACE_WORD_TO_WORD_H

#include "../string_.h"


bool word_equal(word_descriptor* word1, word_descriptor* word2) {
    char* ptr1 = word1->begin;
    char* ptr2 = word2->begin;

    while (ptr1 != word1->end && ptr2 != word2->end) {
        if (*ptr1 != *ptr2)
            return false;

        ptr1++;
        ptr2++;
    }

    if (ptr1 != word1->end || ptr2 != word2->end)
        return false;

    return true;
}


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

    word_descriptor current_word;
    while (get_word(read_ptr, &current_word)) {
        if (word_equal(&current_word, &word1)) {
            copy(word2.begin, word2.end, rec_ptr);
            rec_ptr += w2_size;
        } else {
            copy(current_word.begin, current_word.end, rec_ptr);
            rec_ptr += (current_word.end - current_word.begin);
        }

        read_ptr = current_word.end;
        if (*read_ptr != '\0') {
            *rec_ptr = ' ';
            ++rec_ptr;
            ++read_ptr;
        }
    }

    *rec_ptr = '\0';
}

#endif //CODE_REPLACE_WORD_TO_WORD_H
