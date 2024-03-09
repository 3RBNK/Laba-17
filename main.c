#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/reverse_word.h"



int main() {
    word_descriptor word;

    char s[] = "abcde 1234 5 jopa";

    word.begin = find_non_space(s);
    word.end = find_space(s);

    reverse_word_in_string(s);

    puts(s);

    return 0;
}
