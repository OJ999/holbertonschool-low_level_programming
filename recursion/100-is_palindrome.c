#include "main.h"

/**
 * str_length - Calculates the length of a string recursively
 * @s: String to determine the length of
 *
 * Return: Length of the string
 */

int str_length(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + str_length(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: String to be checked
 * @start: Starting index of the string
 * @end: Ending index of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int len = str_length(s);
if (len == 0 || len == 1)
return (1);
return (check_palindrome(s, 0, len - 1));
}
