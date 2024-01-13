#include "../include/string.h"

#include <stdio.h>

char *string_concat(char *destination, const char *source) {
    char *p_destination_start = destination;

    while (*destination != '\0') {
        destination++;
    }

    while (*source != '\0') {
        *destination++ = *source++;
    }

    *destination = '\0';

    return p_destination_start;
}

int string_compare(const char *string_a, const char *string_b) {
    while (*string_a && (*string_a == *string_b)) {
        string_a++;
        string_b++;
    }

    return *(const unsigned char *)string_a - *(const unsigned char *)string_b;
}

char *string_copy(char *destination, const char *source) {
    char *p_destination_start = destination;

    while (*destination != '\0') {
        *destination++ = *source++;
    }

    return p_destination_start;
}

size_t string_length(const char *string) {
    size_t length = 0;
    while (*string++ != '\0') {
        length++;
    }

    return length;
}

char *string_splice(char *destination, const char *source, int starting_index, int ending_index) {
    char *p = destination;

    for (size_t i = 0; i < starting_index; i++) {
        source++;
    }

    for (size_t j = starting_index; j < ending_index; j++) {
        *destination++ = *source++;
    }

    *destination = '\0';

    return p;
}

char string_char_at(const char *string, const int index) {
    if (index < 0 || index > string_length(string)) {
        return string[0];
    }

    return string[index];
}

bool string_contains(char *haystack, char *needle) {
    char *p1, *p2;

    while (*haystack != '\0') {
        if (*haystack == *needle) {
            p1 = haystack;
            p2 = needle;

            while (*p1 && *p2) {
                if (*p1 != *p2) {
                    break;
                }

                p1++;
                p2++;
            }

            if (*p2 == '\0') {
                return true;
            }
        }

        haystack++;
    }

    return false;
}

bool string_starts_with(const char *string, const char *prefix) {
    while (*prefix != '\0') {
        if (*prefix != *string) {
            return false;
        }
        string++;
        prefix++;
    }
    return true;
}

bool string_ends_with(const char *string, const char *suffix) {
    while (*string != '\0') {
        string++;
    }
    string--;

    while (*suffix != '\0') {
        suffix++;
    }
    suffix--;

    while (*suffix != '\0') {
        if (*suffix != *string) {
            return false;
        }
        string--;
        suffix--;
    }
    return true;
}

char *string_hash() {
    return false;
}

char *string_to_upper(char *string) {
    char *p_string_start = string;

    while (*string != '\0') {
        if (*string >= 'a' && *string <= 'z') {
            *string -= 32;
        }
        string++;
    }

    *string = '\0';
    return p_string_start;
}

char *string_to_lower(char *string) {
    char *p_string_start = string;

    while (*string != '\0') {
        if (*string >= 'A' && *string <= 'Z') {
            *string += 32;
        }
        string++;
    }

    *string = '\0';
    return p_string_start;
}

char *string_capitalize(char *string) {
    
    return "nya";
}
