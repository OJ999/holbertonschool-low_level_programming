#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* Add prototypes for your functions here */
/* For example:
 * int my_function(int arg1, char arg2);
 */

void reset_to_98(int *n)
{
    if (n != NULL) {
        *n = 98;  // Dereference the pointer and set the value to 98
    }
}


#endif /* MAIN_H */

