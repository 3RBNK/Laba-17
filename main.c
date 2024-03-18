#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/change_word_order.h"


int main() {
    char s[50] = "word to vector";

    change_word_order(s);

    puts(s);

    return 0;
}


