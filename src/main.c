#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "../include/string.h"

int main(void) {

    char *string = "hello_world";
    char *str = "ld";

    printf("%d\n", string_ends_with(string, str));

    return 0;
}
