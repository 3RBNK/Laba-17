#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"
#include "string/task/print_word_before_first_word_with_a.h"



void test(char* str1) {
    char* r_begin = str1 + strlen_(str1) - 1;
    char* r_end = str1;

    word_descriptor word;
    get_word_reverse(r_begin, r_end, &word);

    char* first_space = find_space_reverse(r_begin, r_end);
    char* first_non_space = find_non_space_reverse(r_begin, r_end);

    printf("%c %c\n", *(first_space + 1), *first_non_space);
    printf("%p %p\n", (first_space + 1), first_non_space);

    printf("%c %c\n", *word.begin, *word.end);
    printf("%p %p\n", word.begin, word.end);

}




int main() {
    char s[] = "world world";

    print_word_before_first_word_a(s);


    return 0;
}

