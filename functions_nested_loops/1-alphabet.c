#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }

    _putchar('\n');
}

/* Example _putchar function (you can replace it with your own) */
int _putchar(char c)
{
    return write(1, &c, 1);
}

