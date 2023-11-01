#include "main.h"

int _isdigit(int c) {
    // Implementation for _isdigit
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

