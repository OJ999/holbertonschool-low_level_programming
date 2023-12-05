#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *msg, const char *value) {
    dprintf(2, msg, value);
    exit(code);
}

int main(int argc, char *argv[]) {
    const char *file_from;
    const char *file_to;
    int fd_from, fd_to;
    char buffer[BUFFER_SIZE];
    ssize_t read_bytes, write_bytes;

    if (argc != 3) {
        print_error(97, "Usage: %s file_from file_to\n", 0);
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error(98, "Error: Can't read from file %s\n", file_from);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        close(fd_from);
        print_error(99, "Error: Can't write to %s\n", file_to);
    }

    do {
        read_bytes = read(fd_from, buffer, BUFFER_SIZE);
        if (read_bytes == -1) {
            close(fd_from);
            close(fd_to);
            print_error(98, "Error: Can't read from file %s\n", file_from);
        }

        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes == -1) {
            close(fd_from);
            close(fd_to);
            print_error(99, "Error: Can't write to %s\n", file_to);
        }
    } while (read_bytes > 0);

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        print_error(100, "Error: Can't close fd %s\n", file_to);
    }

    return 0;
}
