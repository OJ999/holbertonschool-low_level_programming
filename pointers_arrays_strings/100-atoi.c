#include "main.h"
#include <limits.h>

int _atoi(char *s) {
    int result = 0; // Initialize the result
    int sign = 1;   // Initialize the sign as positive (default)

    // Check for leading '+' or '-' signs
    while (*s == '+' || *s == '-') {
        if (*s == '-') {
            sign *= -1; // If '-', change the sign to negative
        }
        s++; // Move to the next character
    }

    // Parse the string to convert it to an integer
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0'; // Convert character to integer
        // Check for integer overflow
        if (result > (INT_MAX - digit) / 10) {
            // Handle overflow (you can choose your preferred behavior)
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }
        result = result * 10 + digit;
        s++; // Move to the next character
    }

    // Apply the sign to the result
    return result * sign;
}
