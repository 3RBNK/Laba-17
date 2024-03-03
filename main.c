#include <stdio.h>
#include "string/string_.h"


int main() {
    char str1[] = "one three";
    char str2[] = "one three";

    printf("%d", is_equal_string(str1, str2));

    return 0;
}
