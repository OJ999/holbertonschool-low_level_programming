#include "main.h"

char *_strcpy(char *dest, char *src) {
    // Implementation for _strcpy
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

