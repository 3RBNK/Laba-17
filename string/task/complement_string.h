//
// Created by Kirill on 10.03.2024.
//

#ifndef CODE_COMPLEMENT_STRING_H
#define CODE_COMPLEMENT_STRING_H

#include "../string_.h"


size_t max2(const size_t a, const size_t b) {
    return a > b ? a : b;
}


void complement_string(char* s1, size_t n1, char* s2, size_t n2) {
    bool first_string_longer = n1 == max2(n1, n2);

    bag_of_words bag1;
    bag_of_words bag2;

}

#endif //CODE_COMPLEMENT_STRING_H
