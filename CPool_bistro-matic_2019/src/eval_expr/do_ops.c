/*
** EPITECH PROJECT, 2019
** do_ops
** File description:
** do_op point and line
*/

#include "../../include/my.h"

int div_mod_zero(char *nbr2)
{
    if (my_abs(nbr2)[0] == '0') {
        my_putstr("error");
        exit(84);
    }
    return (0);
}

char *do_op_line(char *nbr1, char op, char *nbr2)
{
    int len = bigger_number(nbr1, nbr2) + 1;
    char *res;

    if ((op == '+' && is_neg(nbr1) == is_neg(nbr2)) ||  \
(op == '-' && is_neg(nbr1) != is_neg(nbr2))) {
        res = my_infin_add(my_abs(nbr1), my_abs(nbr2), len, 0);
        if (is_neg(nbr1) == 1 && is_neg(nbr2) == 0 )
            res = to_neg(res);
    }
    else if ((op == '-' && is_neg(nbr1) == is_neg(nbr2)) ||    \
(op == '+' && is_neg(nbr1) != is_neg(nbr2))) {
        res = my_infin_sub(my_abs(nbr1), my_abs(nbr2), len, 0);
        if (neg_sub(nbr1, nbr2))
            res = to_neg(res);
    }
    else
        return (do_op_point(nbr1, op, nbr2));
    free(nbr1);
    return (res);
}

char *do_op_point(char *nbr1, char op, char *nbr2)
{
    int len = bigger_number(nbr1, nbr2) + 1;
    char *res;

    if (op == '*') {
        res = my_infin_mult(my_abs(nbr1), my_abs(nbr2), len);
        if (neg_point(nbr1, nbr2) && res[0] != '0')
            res = to_neg(res);
    }
    else if (op == '/') {
        div_mod_zero(nbr2);
        res = my_infin_div(my_abs(nbr1), my_abs(nbr2), len);
        if (neg_point(nbr1, nbr2) && res[0] != '0')
            res = to_neg(res);
    }
    else
        return (do_op_mod(nbr1, op, nbr2));
    free(nbr1);
    return (res);
}

char *do_op_mod(char *nbr1, char op, char *nbr2)
{
    int len = bigger_number(nbr1, nbr2) + 1;
    char *res;

    if (op == '%') {
        div_mod_zero(nbr2);
        res = my_infin_mod(my_abs(nbr1), my_abs(nbr2), len);
        if (is_neg(nbr1) && is_neg(nbr2))
            res = to_neg(res);
    }
    free(nbr1);
    return (res);
}
