#include "main.h"

/**
 * print_line - Prints a straight line of underscores followed by a newline.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0) 
{
_putchar('_');
n--;
}
_putchar('\n');
}
}
