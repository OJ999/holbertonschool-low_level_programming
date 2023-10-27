#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to append from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    /* Calculate the length of the dest string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append at most n bytes from src to the dest string */
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    dest[dest_len] = '\0'; /* Add the null-terminating character */

    return dest;
}

