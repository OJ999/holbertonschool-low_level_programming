#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;  /* Store the value pointed to by a in temp */
*a = *b;    /* Update value pointed by a with value pointed to by b */
*b = temp;  /* Update the value pointed to by b with the value in temp */
}
