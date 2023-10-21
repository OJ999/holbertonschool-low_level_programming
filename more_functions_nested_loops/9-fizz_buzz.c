#include "main.h"
#include <stdio.h> /* Include the standard I/O library */

/**
 * _putchar - Write a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * fizz_buzz - Prints numbers from 1 to 100 with Fizz, Buzz, and FizzBuzz rules
 */
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
printf(" ");
else
printf("\n");
}
}
int main(void)
{
fizz_buzz();
return (0);
}
