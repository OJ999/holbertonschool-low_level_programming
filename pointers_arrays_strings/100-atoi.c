#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
    int sign = 1;  /* Initialize sign as positive */
    int result = 0;
    int i = 0;
    int numStarted = 0; // Indicates if numeric characters have started

    /* Handle signs and skip leading non-numeric characters */
    while (s[i] != '\0') {
        if (s[i] == '-' || s[i] == '+') {
            if (numStarted) {
                break; // If numeric characters have started, stop at signs
            } else {
                if (s[i] == '-')
                    sign *= -1;  /* Toggle the sign for negative */
            }
        } else if (s[i] >= '0' && s[i] <= '9') {
            numStarted = 1; // Numeric characters have started
            int digit = s[i] - '0';

            // Check for integer overflow for positive numbers
            if (sign == 1 && (result > (INT_MAX - digit) / 10))
                return -1;  // Overflow

            // Check for integer overflow for negative numbers
            if (sign == -1 && (result < (INT_MIN + digit) / 10))
                return 0;  // Overflow

            result = result * 10 + digit;
        } else {
            if (numStarted) {
                break; // If numeric characters have started, stop at non-numeric characters
            }
        }

        i++;
    }

    return result * sign;
}

