/*
** EPITECH PROJECT, 2019
** ds
** File description:
** d
*/

#include "../include/my.h"

int check_zero(char *res)
{
    int i = 0;

    while (res[i] == '0')
        i++;
    if (i == my_strlen(res)) {
        my_putchar('0');
        return (1);
    }
    return (0);
}

int error_check(int ac, char *nb1, char *nb2)
{
    if (ac != 3)
        return (1);
    else if (my_check_nbr(nb1) == 0 || my_check_nbr(nb2) == 0)
        return (1);
    return (0);
}

int my_check_nbr(char *nb)
{
    int len = my_strlen(nb);
    int i = preeloop(nb, len);

    for (; i < len; i++) {
        if (nb[i] < '0' || nb[i] > '9')
            return (0);
    }
    return (1);
}

int preeloop(char *nb, int len)
{
    for (int i = 0; i < len; i++)
        if (nb[i] != '+' && nb[i] != '-')
            return (i);
    return (0);
}