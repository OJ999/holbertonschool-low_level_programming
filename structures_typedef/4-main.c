#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

int main(void)
{
    /* Create a new dog */
    dog_t *my_dog = new_dog("Ghost", 4.75, "Jon Snow");

    /* Check if the new_dog function failed */
    if (my_dog == NULL)
    {
        fprintf(stderr, "Failed to create a new dog.\n");
        return 1;
    }

    /* Print information about the dog */
    printf("My name is %s, I am %.2f, and my owner is %s.\n", my_dog->name, my_dog->age, my_dog->owner);

    /* Free the allocated memory */
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return 0;
}
