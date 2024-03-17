//
// Created by Kirill on 17.03.2024.
//

#ifndef CODE_FIND_PRECEDING_WORD_H
#define CODE_FIND_PRECEDING_WORD_H

#include "../string_.h"


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


bool my_get_word_for_preceding_word(char* begin_search, word_descriptor* word) {
    word->begin = find_non_space(begin_search);
    if (*word->begin == '\0')
        return false;

    word->end = find_space(word->begin) - 1;

    return true;
}


word_descriptor find_preceding_word(char* s1, char* s2) {
    bag_of_words words1 = {.size = 0};
    bag_of_words words2 = {.size = 0};

    char* begin_search_1 = s1;
    char* begin_search_2 = s2;

    while (my_get_word_for_preceding_word(begin_search_1, &words1.words[words1.size])) {
        begin_search_1 = words1.words[words1.size].end + 1;
        words1.size++;
    }

    while (my_get_word_for_preceding_word(begin_search_2, &words2.words[words2.size])) {
        begin_search_2 = words2.words[words2.size].end + 1;
        words2.size++;
    }

    bool stop = false;
    word_descriptor w;
    word_descriptor preceding_w = {.begin = NULL, .end = NULL};
    for (size_t i = 1; i < words1.size; i++) {
        w = words1.words[i];
        preceding_w = words1.words[i - 1];
        for (size_t j = 0; j < words2.size; j++)
            if (is_word_equal(w, words2.words[j])) {
                stop = true;
                break;
            }

        if (stop)
            break;
    }

    return preceding_w;
}

#endif //CODE_FIND_PRECEDING_WORD_H
