#include "main.h"

char *_strcat(char *dest, char *src) {
    // Implementation for _strcat
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    dest[dest_len + i] = '\0';

    return dest;
}

