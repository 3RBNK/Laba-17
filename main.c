#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/remove_non_letters.h"
#include "string/task/remove_adjacent_equal_letters.h"
#include "string/task/reverse_word.h"
#include "string/task/replace_digit_to_space.h"
#include "string/task/replace_word_to_word.h"
#include "string/task/lexicographical_order.h"
#include "string/task/print_revers_ordered.h"
#include "string/task/counter_palindrome_word.h"


int main() {
    test_1_remove_non_letters();
    test_2_remove_adjacent_equal_letters();
    test_3_reverse_word();
    test_4_replace_digit_to_space();
    test_5_replace_word_to_word();
    test_6_lexicographical_order();
//    test_7_print_reverse_ordered();
    test_8_counter_palindrome_word();

    return 0;
}


