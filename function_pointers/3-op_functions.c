#include "3-calc.h"
#include <stdio.h>   /* Include for printf */
#include <stdlib.h>  /* Include for exit */

/**
 * op_div - returns the result of the division of a by b.
 * @a: dividend
 * @b: divisor
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: dividend
 * @b: divisor
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
