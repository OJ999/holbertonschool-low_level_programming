#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, setting memory to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory (with initialized values to zero)
 *         or NULL if allocation fails or if nmemb or size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size = nmemb * size;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(total_size);

if (ptr == NULL)
return (NULL);

/* Clear the allocated memory by setting all bytes to zero */
for (unsigned int i = 0; i < total_size; i++)
*((char *)ptr + i) = 0;

return (ptr);
}
