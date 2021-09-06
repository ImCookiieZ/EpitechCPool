/*
** EPITECH PROJECT, 2019
** check neg
** File description:
** for ops
*/

#include "../../include/my.h"

int neg_point(char *nbr1, char *nbr2)
{
    if (is_neg(nbr1) != is_neg(nbr2))
        return (1);
    return (0);
}

int neg_add(char *nbr1, char *nbr2)
{
    if (is_neg(nbr1) == 1 && is_neg(nbr2) == 1)
        return (1);
    return (0);
}

int neg_sub(char *nbr1, char *nbr2)
{
    if (nb_test_swap(nbr1, nbr2))
        return (1);
    return (0);
}
