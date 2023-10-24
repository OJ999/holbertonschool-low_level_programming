#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers.
 * @a: The array to be printed.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}

