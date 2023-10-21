#include "main.h"

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
        if (i % 3 == 0)
            _putchar('F');
        if (i % 5 == 0)
            _putchar('B');
        if (i % 3 != 0 && i % 5 != 0)
        {
            int num = i;
            while (num > 0)
            {
                _putchar((num % 10) + '0');
                num /= 10;
            }
        }

        if (i != 100)
            _putchar(' ');
        else
            _putchar('\n');
    }
}

int main(void)
{
    fizz_buzz();
    return (0);
}

