#include "main.h"

char *_strstr(const char *haystack, const char *needle) {
    int i, j;
    if (!*needle) {
        return (char *)haystack;
    }
    while (*haystack) {
        i = 0;
        if (haystack[i] == needle[i]) {
            j = 1;
            while (needle[j] && haystack[i + j] == needle[j]) {
                ++j;
            }
            if (!needle[j]) {
                return (char *)haystack;
            }
        }
        haystack++;
    }
    return NULL;
}

