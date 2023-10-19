#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
int r, c, p;
	
for (r = 0; r < 10; r++)
{
for (c = 0; c < 10; c++)
{
p = r * c;
if (c == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (p < 10)
_putchar(' ');
else
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
