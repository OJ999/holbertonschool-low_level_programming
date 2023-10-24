#include "main.h"

/**
 * _strlen - Compute the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

return length;
}

/**
 * puts_half - Print half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int i;

if (length % 2 == 0)
{
for (i = length / 2; i < length; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = (length - 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
}

_putchar('\n');
}

