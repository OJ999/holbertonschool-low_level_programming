#include <stdio.h> // For printf
#include "main.h"

int main(void) {
    char testCharacters[] = {'A', 'a', 'Z', 'z', '5'};
    int result;

    for (int i = 0; i < sizeof(testCharacters) / sizeof(testCharacters[0]); i++) {
        result = _islower(testCharacters[i]);
        printf("Is '%c' lowercase? %d\n", testCharacters[i], result);
    }

    return 0;
}

