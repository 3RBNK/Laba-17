#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/reverse_word.h"
#include "string/task/replace_digit_to_space.h"
#include "string/task/lexicographical_order.h"



int main() {
    char s[20] = "aab aaa ccc";

    printf("%d", is_lexicographical_order(s));

    return 0;
}
