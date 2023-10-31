#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * @i: The current value to check if it's the square root of n.
 * Return: Square root n. If n doesn't have natural square root, returns -1.
 */

int sqrt_recursive(int n, int i) /* sqrt_recursive - Return natural number. */
{
/* Base cases */
if (i * i == n)
{
return (i); /* If square of i equals n, i is the square root */
}
else if (i * i > n)
{
return (-1); /* If square i < n, n doesn't have natural square root */
}
else
{
return (sqrt_recursive(n, i + 1)); /* Recursively search for the square root */
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: Square root of n. If n doesn't have natural square root, return -1.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1); /* Return -1 if n negative (no square root negative numbers) */
}
else if (n == 0)
{
return (0); /* Square root of 0 is 0 */
}
else
{
return (sqrt_recursive(n, 1)); /* Start recursive search from 1 */
}
}
