#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to be found in s
 * Return: Pointer to the first occurrence of the character c in the string s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (c == '\0')
{
return (s);
}

return (NULL);
}
