/*
** EPITECH PROJECT, 2019
** nice
** File description:
** o
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
    int a = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = (nb / (-1) );
    }
    a = count_digits(nb);
    return (0);
}

int count_digits(int nb)
{
    int counter = 0;
    int temp = 0;
    int rest = nb;

    while (rest > 9) {
        temp = rest;
        while (temp > 9) {
            temp = temp / 10;
            counter++;
        }
        rest -= temp * 10 * counter;
        my_putchar(temp + 48);
    }
    my_putchar(rest + 48);
    return (rest);
}
