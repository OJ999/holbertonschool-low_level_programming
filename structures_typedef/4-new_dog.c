#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with specified name, age, and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog, or NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Allocate memory for the name and owner, and copy the values */
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

/* Set the age of the dog */
new_dog->age = age;

return (new_dog);
}

/* Example usage in main */
int main(void)
{
dog_t *my_dog = new_dog("Ghost", 4.75, "Jon Snow");
if (my_dog == NULL)
{
fprintf(stderr, "Failed to create a new dog.\n");
return 1;
}

printf("My name is %s, I am %.2f, and my owner is %s.\n", my_dog->name, my_dog->age, my_dog->owner);

/* Don't forget to free the memory before exiting the program */
free(my_dog->name);
free(my_dog->owner);
free(my_dog);

return 0;
}
