//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_BALANCE_STRING_H
#define CODE_BALANCE_STRING_H

#include "../string_.h"


void complement_string(char* s1, char* s2, size_t n) {
    char* begin_search = s2;


    for (size_t i = 0; i < n; i++) {

    }

    while (get_word_without_space(begin_search, &_bag.words[_bag.size])) {
        begin_search = _bag.words[_bag.size].end + 1;
        _bag.size++;
    }

    for (size_t i = 0; i < _bag.size; i++) {
        print_word(_bag.words[i]);
    }

    char* rec_ptr = get_end_of_string(s1);
    *rec_ptr++ = ' ';

    puts(s1);

    for (size_t i = _bag.size - n; i < _bag.size; i++) {
        rec_ptr = copy(_bag.words[i].begin, _bag.words[i].end, rec_ptr);
        if (i != _bag.size - 1)
            *rec_ptr++ = ' ';
    }

    free_bag(&_bag);
}


void balance_string(char* s1, size_t n1, char* s2, size_t n2) {
    if (n1 < n2)
        complement_string(s1, s2, n2 - n1);
    else if (n1 > n2)
        complement_string(s2, s1, n1 - n2);
}


void double_test() {
    char s1[] = "word to vec";
    size_t n1 = 3;

    char s2[] = "i love penis jopa hui";
    size_t n2 = 5;

    complement_string(s1, s2, n2 - n1);

//    puts(s1);
//    puts(s2);
}


void test_18_empty() {
    char s1[] = "";
    size_t n1 = 0;

    char s2[] = "";
    size_t n2 = 0;

    balance_string(s1, n1, s2, n2);

    ASSERT_STRING("", s1);
    ASSERT_STRING("", s2);
}


void test_18_first_empty() {
    char s1[] = "";
    size_t n1 = 0;

    char s2[] = "two word";
    size_t n2 = 2;

    balance_string(s1, n1, s2, n2);

    ASSERT_STRING(" two word", s1);
    ASSERT_STRING("two word", s2);
}


void test_18_second_empty() {
    char s1[] = "three word";
    size_t n1 = 2;

    char s2[] = "";
    size_t n2 = 0;

    balance_string(s1, n1, s2, n2);

    ASSERT_STRING("three word", s1);
    ASSERT_STRING(" three word", s2);
}


void test_18_equal_length() {
    char s1[] = "three word";
    size_t n1 = 2;

    char s2[] = "two man";
    size_t n2 = 2;

    balance_string(s1, n1, s2, n2);

    ASSERT_STRING("three word", s1);
    ASSERT_STRING("two man", s2);
}


void test_18_different_length_1() {
    char s1[] = "three word boys";
    size_t n1 = 3;

    char s2[] = "man";
    size_t n2 = 1;

    balance_string(s1, n1, s2, n2);

//    ASSERT_STRING("three word", s1);
    ASSERT_STRING(" man word", s2);
}


void test_18_balance_string() {
//    test_18_empty();
//    test_18_first_empty();
//    test_18_second_empty();
//    test_18_equal_length();
//    test_18_different_length_1();
    double_test();
}


#endif //CODE_BALANCE_STRING_H
