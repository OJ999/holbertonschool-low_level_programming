#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');  /* Convert the integer to character and print it */
}
_putchar('\n');  /* Print a new line character to move to the next line */
}
