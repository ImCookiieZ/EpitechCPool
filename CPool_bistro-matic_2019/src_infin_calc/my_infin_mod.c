/*
** EPITECH PROJECT, 2019
** f
** File description:
** d
*/

#include "../include/my.h"

char *my_infin_mod(char *nb1, char *nb2, int size)
{
    char *res;
    char *res_div;
    char *res_mult;
    char *res_sub;

    res_div = my_infin_div(nb1, nb2, size + 1);
    size = bigger_number(nb2, res_div);
    res_mult = my_infin_mult(res_div, nb2, size + 1);
    size = bigger_number(nb1, res_mult);
    res_sub = my_infin_sub(nb1, res_mult, size + 1, 0);
    res = my_delete_zeros(res_sub);
    free(res_div);
    free(res_mult);
    return (res);
}