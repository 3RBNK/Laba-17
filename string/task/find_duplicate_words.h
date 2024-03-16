//
// Created by Kirill on 16.03.2024.
//

#ifndef CODE_FIND_DUPLICATE_WORDS_H
#define CODE_FIND_DUPLICATE_WORDS_H

#include <stdlib.h>
#include "../string_.h"


int compare(const void* s1, const void* s2) {
    return *(char *) s1 - *(char *) s2;
}

void sort_word_letters(word_descriptor* word) {
    qsort(word->begin, word->end - word->begin, sizeof(char), compare);
}


bool my_get_word_for_duplicate_word(char* begin_search, word_descriptor* word) {
    word->begin = find_non_space(begin_search);
    if (*word->begin == '\0')
        return false;

    word->end = find_space(word->begin) - 1;

    return true;
}


bool is_word_equal(const word_descriptor word1, const word_descriptor word2) {
    char* begin1 = word1.begin;
    char* begin2 = word2.begin;

    while (begin1 < word1.end && begin2 < word2.end) {
        if (*begin1 != *begin2)
            return false;

        begin1++;
        begin2++;
    }

    if (word1.end - begin1 > 0 || word2.end - begin2 > 0)
        return false;

    return true;
}


bool are_identical_words_in_string(char* s) {
    char* begin_buff = _string_buffer;

    copy(s, s + strlen_(s), _string_buffer);

    bag_of_words words = {.size = 0};
    while (my_get_word_for_duplicate_word(begin_buff, &words.words[words.size])) {
        begin_buff = words.words[words.size].end + 2;
        words.size++;
    }

    if (words.size <= 1)
        return false;

    for (size_t i = 0; i < words.size; i++)
        sort_word_letters(&words.words[i]);


    for (size_t i = 0; i < words.size; i++)
        for (size_t j = i + 1; j < words.size; j++)
            if (is_word_equal(words.words[i], words.words[j]))
                return true;

    return false;
}


#endif //CODE_FIND_DUPLICATE_WORDS_H
