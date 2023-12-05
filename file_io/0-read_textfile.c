#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file can not be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor, read_chars, write_chars;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(buffer);
return (0);
}

read_chars = read(file_descriptor, buffer, letters);
if (read_chars == -1)
{
free(buffer);
close(file_descriptor);
return (0);
}

write_chars = write(STDOUT_FILENO, buffer, read_chars);
if (write_chars == -1 || write_chars != read_chars)
{
free(buffer);
close(file_descriptor);
return (0);
}

free(buffer);
close(file_descriptor);
return (read_chars);
}
