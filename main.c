#include <stdio.h>
#include <malloc.h>

#include "string/string_.h"


int main() {
    char* begin_destination = (char*) malloc(20 * sizeof(char));

    char str[4] = "one";

    char* end =  copy(str, str+4, begin_destination);

    puts(begin_destination);

    printf("%p\n%p\n%d", begin_destination, end, *(end - 1) == '\0');

    return 0;
}
