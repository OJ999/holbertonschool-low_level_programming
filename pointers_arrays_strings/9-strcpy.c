#include "main.h"

/**
 * _strcpy - Copy a string including the null byte.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';  /* Add the null byte to the end of the destination string */

return (dest);
}
