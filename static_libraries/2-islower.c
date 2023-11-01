#include "main.h"

int _islower(int c) {
    // Implementation for _islower
    if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

