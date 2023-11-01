#include "main.h"
#include <stdio.h>

int main(void) {
    char testChar = 'G'; // Change the character for testing

    if (_isalpha(testChar)) {
        printf("%c is an alphabet\n", testChar);
    } else {
        printf("%c is not an alphabet\n", testChar);
    }

    return 0;
}

