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
#include "string/task/rearranging_words.h"
#include "string/task/change_word_order.h"
#include "string/task/get_word_before_first_word_with_a.h"


int main() {
    test_1_remove_non_letters();
    test_2_remove_adjacent_equal_letters();
    test_3_reverse_word();
    test_4_replace_digit_to_space();
    test_5_replace_word_to_word();
    test_6_lexicographical_order(); // bool, поэтому не имеет вывода
//    test_7_print_reverse_ordered(); // выводит строку
    test_8_counter_palindrome_word(); // bool, поэтому не имеет вывода
    test_9_rearranging_words();
    test_10_change_word_order();
    test_11_all_test_get_before_first_word_with_a();

    return 0;
}


