#include <stdio.h>
#include <malloc.h>

#include "string/task/rearranging_words.h"



int main() {
    char str1[] = "Hello world world world";
    char str2[] = "";
    char result[256] = "";

    merge_words(str1, str2, result);

    printf("%s\n", result);


    return 0;
}

