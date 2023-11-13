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
