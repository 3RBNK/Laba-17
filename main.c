#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/reverse_word.h"
#include "string/task/replace_digit_to_space.h"
#include "string/task/lexicographical_order.h"
#include "string/task/print_revers_ordered.h"
#include "string/task/counter_palindrome_word.h"


int main() {
    char s[20] = "dad, mom, sos";

    printf("%d\n", counter_palindrome_words(s));


    return 0;
}
