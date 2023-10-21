#include "main.h"

void _putchar(char c)
{
    write(1, &c, 1);
}

void print_fizzbuzz(void)
{
    // Implementation for FizzBuzz
}

void print_fizz(void)
{
    // Implementation for Fizz
}

void print_buzz(void)
{
    // Implementation for Buzz
}

void print_number(int n)
{
    // Implementation for printing a number
}

void print_space(void)
{
    _putchar(' ');
}

void print_new_line(void)
{
    _putchar('\n');
}

int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            print_fizzbuzz();
        else if (i % 3 == 0)
            print_fizz();
        else if (i % 5 == 0)
            print_buzz();
        else
            print_number(i);

        if (i < 100)
            print_space();
        else
            print_new_line();
    }

    return (0);
}

