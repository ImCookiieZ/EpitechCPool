/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "../include/my.h"

int bigger_number(char *number1, char *number2)
{
    int len1 = my_strlen(number1);
    int len2 = my_strlen(number2);

    if (len1 > len2)
        return (len1);
    return (len2);
}

int count_minus(char *nb)
{
    int counter = 0;

    for (int i = 0; nb[i] != '\0'; i++)
        if (nb[i] == '-')
            counter++;
    return (counter);
}

int count_signs(char *nb)
{
    int counter = 0;

    for (int i = 0; nb[i] != '\0'; i++)
        if (nb[i] == '+' || nb[i] == '-')
            counter++;
    return (counter);
}

int my_pre_query(char **av)
{
    int size_res = bigger_number(av[1], av[2]) + 1;
    char *res = malloc(sizeof(char) * (size_res + 1));
    char **argv = check_argv_swap(av);
    int count_minus_nb1 = count_minus(argv[1]);
    int count_minus_nb2 = count_minus(argv[2]);
    int add_or_sub = count_minus_nb1 + count_minus_nb2;

    if (add_or_sub % 2 == 0) {
        if (count_minus_nb1 % 2 == 1)
            my_putchar('-');
        res = my_infin_add(argv[1], argv[2], res, size_res - 1);
        check_zero(res);
    } else {
        res = my_infin_sub(argv[1], argv[2], res, size_res - 1);
        if (check_zero(res) == 0 && count_minus_nb1 % 2 > count_minus_nb2 % 2)
            my_putchar('-');
    }
    my_putstr2(res);
    free(res);
    return (0);
}
