#include "main.h"
#include <limits.h> /* Include the limits.h header for INT_MAX and INT_MIN */

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the input string.
 */
int _atoi(char *s)
{
    int sign = 1;  /* Initialize sign as positive */
    int result = 0;
    int i = 0;

    /* Handle signs */
    while (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign *= -1;  /* Toggle the sign for negative */
        i++;
    }

    /* Convert the string to an integer */
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // Check for integer overflow for positive numbers
        if (sign == 1 && (result > (INT_MAX - digit) / 10))
            return -1;  // Overflow

        // Check for integer overflow for negative numbers
        if (sign == -1 && (result < (INT_MIN + digit) / 10))
            return 0;  // Overflow

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

