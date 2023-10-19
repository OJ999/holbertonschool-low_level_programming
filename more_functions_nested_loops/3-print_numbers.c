#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
 char number;

number = '0';
while (number <= '9')
{
_putchar(number);
number++;
}

_putchar('\n');
}
