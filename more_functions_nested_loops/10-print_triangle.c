#include "main.h"

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n'); // If size is 0 or less, print only a newline
    } else {
        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size - i; j++) {
                _putchar(' '); // Print spaces
            }
            for (int k = 1; k <= i; k++) {
                _putchar('#'); // Print '#' characters
            }
            _putchar('\n'); // Move to the next line
        }
    }
}
