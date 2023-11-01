#include "main.h"

void _puts2(char *str) {
    // Implementation for _puts2
    while (*str != '\0') {
        _putchar(*str);
        str++;
    }
}

