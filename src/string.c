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
    char *p = destination;

    while (*destination != '\0') {
        *destination++ = *source++;
    }

    return p;
}

size_t string_length(const char *string) {
    size_t length = 0;
    while (*string++ != '\0') {
        length++;
    }

    return length;
}

void string_split(char *string, char *delimiter) {
}

char *string_splice(char *destination, const char *source, int starting_index, int ending_index) {
}

char string_char_at(const char *string, const int index) {
    if (index < 0 || index > string_length(string)) {
        return string[0];
    }

    return string[index];
}

void string_unic_at(const char *string, const int index) {
}

bool string_contains(const char *needle, const char *haystack) {
}

void string_starts_with(const char *string, const char *prefix) {
}

void string_ends_with(const char *string, const char *suffix) {
}

void string_hash() {
}

void string_to_upper() {
}

void string_to_lower() {
}

void string_capitalize() {
}
