#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or the corresponding error code on failure.
 */
int main(int argc, char **argv)
{
    int file_from, file_to, read_chars, write_chars;
    char buffer[BUFFER_SIZE];
    struct stat st;

    if (argc != 3)
{
    dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
    return 97;
}

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    if (fstat(file_from, &st) == -1)
    {
        close(file_from);
        perror("Error");
        return 98;
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode);
    if (file_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        return 99;
    }

    do
    {
        read_chars = read(file_from, buffer, BUFFER_SIZE);
        if (read_chars == -1)
        {
            dprintf(2, "Error: Can't read from file %s\n", argv[1]);
            close(file_from);
            close(file_to);
            return 98;
        }

        write_chars = write(file_to, buffer, read_chars);
        if (write_chars == -1 || write_chars != read_chars)
        {
            dprintf(2, "Error: Can't write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            return 99;
        }
    } while (read_chars > 0);

    if (close(file_from) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_from);
        return 100;
    }

    if (close(file_to) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_to);
        return 100;
    }

    /* Explicitly set the permissions of the copied file (rw-rw-r--) */
    if (chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH) == -1)
    {
        perror("Error");
        return 99;
    }

    return 0;
}
