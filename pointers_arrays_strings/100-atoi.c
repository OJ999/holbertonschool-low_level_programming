#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;
    int numStarted = 0; // Indicates if numeric characters have started

    while (s[i] != '\0') {
        if (s[i] == '-' || s[i] == '+') {
            if (numStarted) {
                break;
            } else {
                if (s[i] == '-')
                    sign *= -1;
            }
        } else if (s[i] >= '0' && s[i] <= '9') {
            numStarted = 1;
            int digit = s[i] - '0';

            if (sign == 1 && (result > (INT_MAX - digit) / 10))
                return -1;

            if (sign == -1 && (result < (INT_MIN + digit) / 10))
                return 0;

            result = result * 10 + digit;
        } else {
            if (numStarted) {
                break;
            }
        }

        i++;
    }

    return result * sign;
}

