#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int length = 0;
int start = 0;
char temp;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

length--; /* Adjust length to point to the last character */

while (start < length)
{
/* Swap characters at start and length positions */
temp = s[start];
s[start] = s[length];
s[length] = temp;

start++;
length--;
}
}
