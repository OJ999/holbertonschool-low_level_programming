#include "main.h"
#include <unistd.h>

/**
 * _putchar - Custom putchar function
 * @c: Character to print
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * _putprogramname - Prints the program name
 * @name: Name of the program
 */
void _putprogramname(char *name)
{
    while (*name)
    {
        _putchar(*name);
        name++;
    }
    _putchar('\n');
}

