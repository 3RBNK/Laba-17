//
// Created by Kirill on 09.03.2024.
//

#ifndef CODE_LEXICOGRAPHICAL_ORDER_H
#define CODE_LEXICOGRAPHICAL_ORDER_H


#include "../string_.h"


//bool get_word(char* begin_search, word_descriptor* word) {
//    word->begin = find_non_space(begin_search);
//    if (*word->begin == '\0')
//        return false;
//
//    word->end = find_space(word->begin);
//
//    return true;
//}


int are_words_equal(word_descriptor w1, word_descriptor w2) {
    while (*w1.begin && (*w1.begin == *w2.begin)) {
        w1.begin ++;
        w2.begin++;
    }

    return *(const unsigned char*) w1.begin - *(const unsigned char*) w2.begin;
}


bool is_lexicographical_order(char* s) {
    char* begin_search = s;
    word_descriptor word1, word2;

    if (!get_word(begin_search, &word1))
        return true;

    begin_search = word1.end;


    while (get_word(begin_search, &word2)) {
        if (are_words_equal(word1, word2) <= 0)
            word1 = word2;
        else
            return false;

        begin_search = word2.end;
    }

    return true;
}


#endif //CODE_LEXICOGRAPHICAL_ORDER_H
