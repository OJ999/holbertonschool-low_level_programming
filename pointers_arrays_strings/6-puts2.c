#include "main.h"

/**
 * puts2 - Print every other character of a string, starting with the first character
 * @str: The input string
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2; /* Increment by 2 to skip every other character */
    }

    _putchar('\n'); /* Print a newline character at the end */
}

