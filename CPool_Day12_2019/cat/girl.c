/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include <sys/types.h>
#include <sys/stat.h>
#include "../include/my.h"
#include <errno.h>

void my_print(char *av, int fd, char *buffer)
{
    int size = 0;

    size = read(fd, buffer, 30000);
    write(1, buffer, size);
}

void my_error_print(char *av)
{
    int len = my_strlen(av);

    write(2, "cat: ", 6);
    write(2, av, len);
    if (errno ==  EACCES)
            write(2, ": Argument list too long\n", 26);
    if (errno == EINTR)
            write(2, ": Interrupted function call\n", 29);
    if (errno == EISDIR)
        write (2, ": Is a directory\n", 18);
    if (errno == ENOENT)
        write(2, ": No such file or directory\n", 29);
}

int do_funktion(char *av)
{
    int fd = 0;
    char buffer[30001];

    for (int i = 0; i < 30001; i++)
        buffer[i] = '\0';
    fd = open(av, O_RDONLY);
    if (fd == -1) {
        my_error_print(av);
        return (84);
    }
    my_print(av, fd, buffer);
    close(fd);
    return (0);
}

int main(int argc, char **argv)
{
    int error_try = 0;
    char buffer[30000];
    int temp = 0;

    if (argc == 1) {
        while (1) {
            temp = read(0, buffer, 1);
            write(1, buffer, 1);
            if (temp == 0)
                return (0);
        }
    }
    for (int i = 1; i < argc; i++)
        error_try = do_funktion(argv[i]);
    return (error_try);
}
