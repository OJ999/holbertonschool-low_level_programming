#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i = 0;

/* Calculate the length of the dest string */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append the src string to the dest string */
while (src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

dest[dest_len] = '\0'; /* Add the null-terminating character */

return (dest);
}
