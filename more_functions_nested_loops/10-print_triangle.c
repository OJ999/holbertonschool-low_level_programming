#include "main.h"

/**
 * print_triangle - Print a triangle of a specified size using '#' characters.
 * @size: The size of the triangle.
 *
 * If size is 0 or less, the function prints only a newline.
 */

void (print_triangle(int size))
{
int i, j, k;
if (size <= 0)
{
_putchar('\n'); /* If size is 0 or less, print only a newline */
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size - i; j++)
{
_putchar(' '); /* Print spaces */
}
for (k = 1; k <= i; k++)
{
_putchar('#'); /* Print '#' characters */
}
_putchar('\n'); /* Move to the next line */
}
}
}

