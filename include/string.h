#ifndef STRING_H
#define STRING_H

#include <stdbool.h>
#include <stdio.h>

/**
 * this function appends the string pointed to by source to the end of the string pointed to by destination
 * @param destination a pointer to a character array big enough to hold itself & the contentents of source
 * @param source      a character array or string literal
 * @return            a pointer to the first character in the string pointed to by destination
 */
char *string_concat(char *destination, const char *source);

/**
 * this function compares two strings lexigraphically & returns an integer value based off of string_a's precedence to string_b
 * @param string_a a pointer to a string
 * @param source_b a pointer to another string
 * @return         an integer value of 0 if both strings are equal;
 *                                  of a positive number if string_a is greater than string_b;
 *                                  of a negative number if string_a is less    than string_b;
 */
int string_compare(const char *string_a, const char *string_b);

/**
 * this function copies the string pointed to by source into the string pointed to by destination
 * @param destination a character array big enough to hold the contents of source
 * @param source      a character array or string literal
 * @return            a pointer to destination
 */
char *string_copy(char *destination, const char *source);

/**
 * this function calculates the length of a string
 * @param string  a character array or string literal
 * @return        the length of the string
 */
size_t string_length(const char *string);

/**
 * this function splits a string into an array of strings around matches of the delimiter
 * @param string     a character array or string literal
 * @param delimiter  a string identifying where the string should be split
 * @return           an array of strings around matches of the delimiter
 */
char** string_split(char *string, char *delimiter);

/**
 * this function returns a substring of a string based off the starting & ending indexes
 * @param destination     a character array big enough to hold the contents of the substring
 * @param source          a pointer to a character array or string literal to splice
 * @param starting_index  an index of the first  character of the substring
 * @param ending_index    an index of the last   character of the substring
 * @return                a pointer to destination
 */
char *string_splice(char *destination, const char *source, int starting_index, int ending_index);

/**
 * this function returns a character in the string at an index
 * @param string a character array or string literal
 * @param index  an index
 * @return       a character in the string at an index
 */
char string_char_at(const char *string, const int index);

/**
 * this function returns a unicode point in the string at an index
 * @param string a character array or string literal
 * @param index  an index
 * @return       a unicode point in the string at an index
 */
void string_unic_at(const char *string, const int index);

/**
 * this function checks if a string pointed to by needle is contained in another string pointed to by haystack
 * @param needle   a pointer to a character array or string literal
 * @param haystack a pointer to another character array or string literal
 * @return         o boolean of true if the string pointed to by needle is found in the string pointed to by haystack
 */
bool string_contains( char *needle,  char *haystack);

/**
 * this function checks if the string pointed to by prefix is contained at the start of a string
 * @param string a pointer to a character array or string literal
 * @param prefix a pointer to another character array or string litera
 * @return       a boolean of true if the string pointed to by prefix is found at the start of a string
 */
bool string_starts_with(const char *string, const char *prefix);

/**
 * this function checks if the string pointed to by prefix is contained at the end of a string
 * @param string a pointer to a character array or string literal
 * @param suffix a pointer to another character array or string litera
 * @return       a boolean of true if the string pointed to by suffix is found at the end of a string
 */
bool string_ends_with(const char *string, const char *suffix);

/**
 * this function hashes a string using the ___ algorithm
 * @param string a pointer to a character array or string literal
 * @return       a pointer to the hashed string
 */
char *string_hash();

/**
 * this function converts a string to uppercase
 * @param string a pointer to a character array or string literal
 * @return       a pointer to string
 */
char *string_to_upper(char *string);

/**
 * this function converts a string to lowercase
 * @param string a pointer to a character array or string literal
 * @return       a pointer to string
 */
char *string_to_lower();

/**
 * this function converts the first character in a string to uppercase & every character afterwards to lowercase
 * @param stringa pointer to a character array or string literal...
 * @return        a pointer to string
 */
char *string_capitalize();

#endif
