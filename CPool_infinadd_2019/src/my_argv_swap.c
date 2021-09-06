/*
** EPITECH PROJECT, 2019
** d
** File description:
** f
*/

#include "../include/my.h"

char **my_swap_argv(char **argv)
{
    char *temp = '\0';

    temp = argv[1];
    argv[1] = argv[2];
    argv[2] = temp;
    return (argv);
}

char **check_argv_swap(char **argv)
{
    int begin_nb1 = count_signs(argv[1]);
    int begin_nb2 = count_signs(argv[2]);
    int digits_nb1 = my_strlen(argv[1]) - begin_nb1;
    int digits_nb2 = my_strlen(argv[2]) - begin_nb2;

    if (digits_nb1 == digits_nb2) {
        for (int i = 0; i < digits_nb1; i++) {
            if (argv[1][begin_nb1] < argv[2][begin_nb2]) {
                argv = my_swap_argv(argv);
                return (argv);
            }
        begin_nb1 += 1;
        begin_nb2 += 1;
        }
    }
    else if (digits_nb1 < digits_nb2)
        argv = my_swap_argv(argv);
    return (argv);
}
