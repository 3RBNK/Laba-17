#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/find_preceding-word.h"


int main() {
    char s1[] = "i love grusha";
    char s2[] = "jopa love apple";

    word_descriptor word = find_preceding_word(s1, s2);

    print_word(word);

    return 0;
}


