#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *file_name) {
    const char *file_name_only = strrchr(file_name, '/');
    file_name_only = (file_name_only == NULL) ? file_name : file_name_only + 1;

    switch (code) {
        case 97:
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
            break;
        case 98:
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name_only);
            break;
        case 99:
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_name_only);
            break;
        case 100:
            dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_name_only);
            break;
        default:
            break;
    }
    exit(code);
}

int main(int argc, char *argv[]) {
    int file_from, file_to;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read, bytes_written;

    if (argc != 3) {
        print_error(97, NULL);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1) {
        print_error(98, argv[1]);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to == -1) {
        print_error(99, argv[2]);
    }

    do {
        bytes_read = read(file_from, buffer, BUFFER_SIZE);
        if (bytes_read == -1) {
            print_error(98, argv[1]);
        }

        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            print_error(99, argv[2]);
        }
    } while (bytes_read > 0);

    if (close(file_from) == -1) {
        print_error(100, argv[1]);
    }

    if (close(file_to) == -1) {
        print_error(100, argv[2]);
    }

    return 0;
}
