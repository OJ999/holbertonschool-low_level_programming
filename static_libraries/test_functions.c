#include <stdio.h> // For printf
#include "main.h"

int main(void) {
    char c;
    int result;

    // _islower function test
    c = 'A';
    result = _islower(c);
    printf("Is '%c' lowercase? %d\n", c, result);

    // _isalpha function test
    c = '9';
    result = _isalpha(c);
    printf("Is '%c' alphabetic? %d\n", c, result);

    // _abs function test
    int number = -15;
    printf("Absolute value of %d is %d\n", number, _abs(number));

    // _isupper function test
    c = 'Z';
    result = _isupper(c);
    printf("Is '%c' uppercase? %d\n", c, result);

    // _isdigit function test
    c = '5';
    result = _isdigit(c);
    printf("Is '%c' a digit? %d\n", c, result);

    // _strlen function test
    char *str = "Hello, world!";
    printf("Length of '%s' is %d\n", str, _strlen(str));

    // _puts function test
    char *str_to_print = "This is a test string.";
    _puts(str_to_print);

    // _strcpy function test
    char dest[50];
    char *src = "Copy this string.";
    _strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    // Add test cases for other functions similarly

    return 0;
}

