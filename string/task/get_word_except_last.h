//
// Created by Kirill on 17.03.2024.
//

#ifndef CODE_GET_WORD_EXCEPT_LAST_H
#define CODE_GET_WORD_EXCEPT_LAST_H

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


bool my_get_word_for_except_word(char* begin_search, word_descriptor* word) {
    word->begin = find_non_space(begin_search);
    if (*word->begin == '\0')
        return false;

    word->end = find_space(word->begin) - 1;

    return true;
}


void get_word_except_last(char* source, char* dest) {
    char* begin_search = source;

    bag_of_words words = {.size = 0};

    while (my_get_word_for_except_word(begin_search, &words.words[words.size])) {
        begin_search = words.words[words.size].end + 1;
        words.size++;
    }


    word_descriptor last_word = words.words[words.size - 1];
    char* rec_ptr = dest;

    for (size_t i = 0; i < words.size - 1; i++) {
        if (!is_word_equal(words.words[i], last_word)) {
            rec_ptr = copy(words.words[i].begin, words.words[i].end + 1, rec_ptr);
            if (i != words.size - 2)
                *rec_ptr++ = ' ';
        }
    }
    *rec_ptr = '\0';
}


#endif //CODE_GET_WORD_EXCEPT_LAST_H
