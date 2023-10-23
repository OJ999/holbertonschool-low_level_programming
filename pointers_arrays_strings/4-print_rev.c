#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int length = 0;

/* Calculate the length of the string */
while (*s != '\0')
{
length++;
s++;
}

/* Print the string in reverse order */
for (length -= 1; length >= 0; length--)
{
_putchar(s[length]);
}

_putchar('\n'); /* Print a new line */
}

