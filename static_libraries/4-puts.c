#include "main.h"

void _puts(char *s) {
    // Implementation for _puts
    int i = 0;
    while (s[i] != '\0') {
        _putchar(s[i]);
        i++;
    }
}

