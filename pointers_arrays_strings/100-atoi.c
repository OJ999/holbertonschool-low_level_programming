#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
    int sign = 1;  /* Initialize sign as positive */
    int result = 0;
    int i = 0;
    int numStarted = 0; /* Indicates if numeric characters have started */
    int is_min = 0; /* Flag to indicate INT_MIN case */
    int digit; /* Declare digit outside the loop */

    /* Handle signs and skip leading non-numeric characters */
    while (s[i] != '\0') {
        if (s[i] == '-' || s[i] == '+') {
            if (numStarted) {
                break; /* If numeric characters have started, stop at signs */
            } else {
                if (s[i] == '-')
                    sign *= -1;  /* Toggle the sign for negative */
            }
        } else if (s[i] >= '0' && s[i] <= '9') {
            numStarted = 1; /* Numeric characters have started */
            digit = s[i] - '0';

            if (result == INT_MIN / 10 && digit == 8 && sign == -1) {
                is_min = 1; /* Handle INT_MIN case */
                result = INT_MIN;
                break;
            } else if (result < INT_MIN / 10) {
                return INT_MIN; /* Overflow, set to INT_MIN */
            } else if (result > INT_MAX / 10) {
                return INT_MAX; /* Overflow, set to INT_MAX */
            }

            result = result * 10 + digit;
        } else {
            if (numStarted) {
                break; /* If numeric characters have started, stop at non-numeric characters */
            }
        }

        i++;
    }

    return is_min ? INT_MIN : result * sign;
}

