#include "main.h"

/**
 * print_diagonal - Prints a diagonal line.
 * @n: The number of backslashes to print in the diagonal line.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, spaces;
for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
}
