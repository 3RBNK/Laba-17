#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/remove_palindrome_word.h"


int main() {
    char s1[] = "i love oooo jopa yoy";

    remove_palindrome_word(s1);

    puts(s1);

    return 0;
}


