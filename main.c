#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/reverse_word.h"
#include "string/task/replace_digit_to_space.h"
#include "string/task/lexicographical_order.h"
#include "string/task/print_revers_ordered.h"



int main() {
    char s[20] = "dad mom son";

    bag_of_words bag;
    print_reverse_ordered(&bag, s);

    return 0;
}
