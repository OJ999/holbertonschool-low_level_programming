#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int first_arg = 1;  /* Variable to track if we are printing the first argument */

    va_start(args, format);

    while (format && format[i])
    {
        /* Print comma only if not the first argument */
        if (!first_arg)
            printf(", ");

        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                break;
        }

        first_arg = 0;  /* After printing the first argument, set to 0 */
        i++;
    }

    printf("\n");

    va_end(args);
}
