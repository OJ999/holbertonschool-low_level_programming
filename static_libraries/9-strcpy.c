/**
 * _strcpy - Copies a string from src to dest
 * @dest: Destination buffer to copy the string into
 * @src: String to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // Append null terminator to the end of dest

    return start;
}

