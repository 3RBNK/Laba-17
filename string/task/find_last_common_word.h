//
// Created by Kirill on 16.03.2024.
//

#ifndef CODE_FIND_LAST_COMMON_WORD_H
#define CODE_FIND_LAST_COMMON_WORD_H

#include "../string_.h"


bool is_word_equal(const word_descriptor word1, const word_descriptor word2) {
    char* begin1 = word1.begin;
    char* begin2 = word2.begin;

    while (begin1 != word1.end && begin2 != word2.end) {
        if (*begin1 != *begin2)
            return false;

        begin1++;
        begin2++;
    }

    if (word1.end - begin1 != 0 || word2.end - begin2 != 0)
        return false;

    return true;
}


word_descriptor find_last_common_word(char* s1, char* s2) {
    bag_of_words words1 = {.size = 0};
    bag_of_words words2 = {.size = 0};

    char* begin_search = s1;

    while (get_word(begin_search, &words1.words[words1.size])) {
        begin_search = words1.words[words1.size].end + 1;
        words1.size++;
    }

    begin_search = s2;

    while (get_word(begin_search, &words2.words[words2.size])) {
        begin_search = words2.words[words2.size].end + 1;
        words2.size++;
    }

    word_descriptor no_common_word = {.begin = NULL, .end = NULL};
    for (int i = (int) words1.size - 1; i >= 0; i--) {
        for (int j = 0; j < words2.size; j++) {
            if (is_word_equal(words1.words[i], words2.words[j]))
                return words1.words[i];
        }
    }

    return no_common_word;
}

#endif //CODE_FIND_LAST_COMMON_WORD_H
