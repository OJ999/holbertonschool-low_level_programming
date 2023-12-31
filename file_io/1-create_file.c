#include <fcntl.h>
#include <unistd.h>
#include <string.h>  /* Add line to include necessary declaration strlen */
#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor, write_chars, close_result;

if (filename == NULL)
return (-1);

file_descriptor = open
(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
write_chars = write(file_descriptor, text_content, strlen(text_content));
if (write_chars == -1)
{
close(file_descriptor);
return (-1);
}
}

close_result = close(file_descriptor);
if (close_result == -1)
return (-1);

return (1);
}
