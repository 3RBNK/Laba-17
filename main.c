#include <stdio.h>
#include <malloc.h>

#include "string/task/replace_word_to_word.h"



int main() {
    char s[] = "Hello world! world is beautiful. world";

    char w1[] = "world";
    char w2[] = "Earttt";

    printf("After: \n");
    puts(s);

    replace(s, w1, w2);

    printf("Before: \n");
    puts(s);

    return 0;
}

