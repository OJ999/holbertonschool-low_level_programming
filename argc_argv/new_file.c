#include "main.h"
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void _putname(char *name) {
    while (*name) {
        _putchar(*name);
        name++;
    }
    _putchar('\n');
}

