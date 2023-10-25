#include "main.h"

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

        /* Check for integer overflow */
        if (sign == 1 && (result > 214748364 || (result == 214748364 && digit > 7)))
            return -1;
        if (sign == -1 && (result > 214748364 || (result == 214748364 && digit > 8)))
            return 0;

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

