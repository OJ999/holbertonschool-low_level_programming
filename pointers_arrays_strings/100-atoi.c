#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign = 1; // Default to positive

    // Skip leading whitespace
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    // Handle sign
    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    // Convert digits to integer
    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        s++;
    }

    // Apply sign
    return sign * result;
}

