#include <stdio.h>
#include <malloc.h>

#include "string/task/letters_belong_string.h"



int main() {

    char string[] = "net da da da";
    char word[] = "etf";

    printf("%d", letters_belong_string(string, word));

    return 0;
}

