#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* New function prototype for creating a new dog */
dog_t *new_dog(char *name, float age, char *owner);
int main(void)
{
dog_t *my_dog;

my_dog = new_dog("Ghost", 4.75, "Jon Snow");
if (my_dog == NULL)
{
printf("Failed\n");
return (1);
}
printf("My name is %s, I am %.2f, and my owner is %s\n",
my_dog->name, my_dog->age, my_dog->owner);
return (0);
}
#endif /* DOG_H */
