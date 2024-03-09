#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/reverse_word.h"
#include "string/task/replace_digit_to_space.h"



int main() {
    char s[20] = "f3b0c1d0d";

    replace_digit_to_space(s);

    puts(s);

    return 0;
}
