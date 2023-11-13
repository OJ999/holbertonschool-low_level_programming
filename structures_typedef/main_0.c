#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");
    printf("My name is %s, and I am %.2f :) - Woof!\n", my_dog->name, my_dog->age);

    // Don't forget to free the memory allocated for the dog when done:
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return (0);
}
