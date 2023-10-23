#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be reversed and printed.
 */
void print_rev(char *s)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}

int main(void)
{
char *str = "Lorem ipsum...";
print_rev(str);
return (0);
}
