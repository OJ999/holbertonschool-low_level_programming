#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    
    // Skip leading white spaces
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    
    // Check for an optional sign
    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }
    
    // Process digits
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';
        
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        
        result = result * 10 + digit;
        i++;
    }
    
    return result * sign;
}

