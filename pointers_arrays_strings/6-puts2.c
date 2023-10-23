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
        if (i % 2 == 0) // Check if the index is even
            _putchar(str[i]);
        i++;
    }

    _putchar('\n'); // Print a newline character at the end
}

