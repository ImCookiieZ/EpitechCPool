/*
** EPITECH PROJECT, 2019
** nice
** File description:
** o
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
    int mod;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            my_put_nbr(nb);
            my_putchar(mod + 48);
        }
        else
            my_putchar(nb % 10 + 48);
    }
}
