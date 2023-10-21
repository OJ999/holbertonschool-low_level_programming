#include "main.h"

/**
 * fizz_buzz - Prints numbers from 1 to 100 with Fizz, Buzz, and FizzBuzz rules.
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
_putchar('F');
if (i % 5 == 0)
_putchar('B');
if (i % 3 != 0 && i % 5 != 0)
{
int num = i;
while (num >= 10)
num /= 10;
_putchar(num + '0');
}
if (i < 100)
_putchar(' ');
}
_putchar('\n');
}
