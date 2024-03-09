//
// Created by Kirill on 02.03.2024.
//

#include <ctype.h>

#include "string_.h"

char _string_buffer[MAX_STRING_SIZE + 1];

size_t strlen_(const char* begin) {
    char* end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}


char* find(char *begin, char* end, int ch) {
    while (begin != end && *begin != ch)
        begin++;
    return begin;
}


char* find_non_space(char* begin) {
    while (*begin != '\0' && isspace(*begin))
        begin++;

    return begin;
}


char* find_space(char* begin) {
    while (*begin != '\0' && !isspace(*begin))
        begin++;

    return begin;
}


char* find_non_space_reverse(char* r_begin, const char* r_end) {
    while (r_begin != r_end && isspace(*r_begin))
        r_begin--;
    return r_begin;
}


char* find_space_reverse(char* r_begin, const char* r_end) {
    while (r_begin != r_end && !isspace(*r_begin))
        r_begin--;
    return r_begin;
}


int is_equal_string(const char* lhs, const char* rhs) {
    while (*lhs != '\0' && *rhs != '\0' && *lhs == *rhs) {
        lhs++;
        rhs++;
    }

    return *(const unsigned char*) lhs - *(const unsigned char*) rhs;
}


char* copy(const char* begin_source, const char* end_source, char* begin_destination) {
    char* start = begin_source;

    while (start != end_source) {
        *begin_destination = *start;
        begin_destination++;
        start++;
    }

    return begin_destination;
}


char* copy_if(const char* begin_source, const char* end_source, char* begin_destination, int (*f)(int)) {
    char* start = begin_source;

    while (start != end_source) {
        if (f(*start)) {
            *begin_destination = *start;
            begin_destination++;
        }

        start++;
    }

    return begin_destination;
}


char* copy_if_reverse(const char* r_begin_source, const char* r_end_source, char* begin_destination, int (*f)(int)) {
    char* start = r_begin_source;

    while (start != r_end_source) {
        if (f(*start)) {
            *begin_destination = *start;
            begin_destination++;
        }
        
        start--;
    }

    return begin_destination;
}