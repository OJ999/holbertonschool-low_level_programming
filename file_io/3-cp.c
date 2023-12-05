#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *msg, const char *filename, int value) {
    dprintf(STDERR_FILENO, "%s: %d: %s\n", filename, code, msg);
    exit(value);
}

void copy_file(const char *file_from, const char *file_to) {
    const char *file_from = argv[1];
    const char *file_to = argv[2];
    int fd_from, fd_to, read_count, write_count;
    char buffer[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error(98, "Error: Can't read from file %s\n", file_from, 0);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        print_error(99, "Error: Can't write to %s\n", file_to, 0);
    }

    while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        write_count = write(fd_to, buffer, read_count);
        if (write_count == -1 || read_count != write_count) {
            print_error(99, "Error: Can't write to %s\n", file_to, 0);
        }
    }

    if (read_count == -1) {
        print_error(98, "Error: Can't read from file %s\n", file_from, 0);
    }

    if (close(fd_from) == -1) {
        print_error(100, "Error: Can't close fd %d\n", file_from, 0);
    }

    if (close(fd_to) == -1) {
        print_error(100, "Error: Can't close fd %d\n", file_to, 0);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error(97, "Usage: %s file_from file_to\n", NULL, 0);
    }

    copy_file(argv[1], argv[2]);

    return 0;
}
