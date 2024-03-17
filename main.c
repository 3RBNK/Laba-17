#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/get_word_except_last.h"


int main() {
    char s[] = "python";
    char dest[50] = "";

    get_word_except_last(s, dest);

    puts(dest);

    return 0;
}


