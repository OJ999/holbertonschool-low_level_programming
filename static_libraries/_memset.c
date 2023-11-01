#include "main.h"
void *_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    while (n > 0) {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return s;
}

