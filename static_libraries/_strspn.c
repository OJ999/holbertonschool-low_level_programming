#include "main.h"
size_t _strspn(const char *s, const char *accept) {
    size_t count = 0;
    int found;

    while (*s) {
        found = 0;
        for (int i = 0; accept[i]; i++) {
            if (*s == accept[i]) {
                count++;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            return count;
        }
        s++;
    }
    return count;
}

