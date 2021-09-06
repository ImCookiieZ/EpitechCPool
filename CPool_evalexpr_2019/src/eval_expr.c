/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** main_functions
*/

#include "../include/my.h"

int parsing(char **str)
{
    int nbr = 0;
    int sign = 1;

    if (**str == '+' || **str == '-') {
        if (**str == '-')
            sign = -1;
        *str += 1;
    }
    if (**str == '(') {
        *str += 1;
        nbr = main_calc(str);
        if (**str == ')')
            *str += 1;
        return (sign * nbr);
    }
    for (; **str >= '0' && **str <= '9'; *str += 1)
        nbr = nbr * 10 + **str - 48;
    return (sign * nbr);
}

int point_calc(char **str)
{
    int nbr1 = parsing(str);
    int nbr2 = 0;
    char op = 0;

    for (; **str == '*' || **str == '/' || **str == '%'; \
nbr1 = do_op(nbr1, op, nbr2)) {
        op = **str;
        *str += 1;
        nbr2 = parsing(str);
    }
    return (nbr1);
}

int main_calc(char **str)
{
    int nbr1 = parsing(str);
    int nbr2 = 0;
    char op = 0;

    for (; **str != '\0' && **str != ')'; \
nbr1 = do_op(nbr1, op, nbr2)) {
        op = **str;
        *str += 1;
        if (op == '+' || op == '-')
            nbr2 = point_calc(str);
        else
            nbr2 = parsing(str);
    }
    return (nbr1);
}

int eval_expr(char *str)
{
    int res  = 0;

    if (str != NULL)
        res  = main_calc(&str);
    return (res);
}
