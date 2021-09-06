/*
** EPITECH PROJECT, 2019
** new eval expr
** File description:
** with strings
*/

#include "../../include/my.h"

int skip_sign(char **str)
{
    int negative = 1;

    if (**str == '+' || **str == '-') {
        if (**str == '-')
            negative *= -1;
        *str += 1;
    }
    return (negative);
}

char *insert_nbr(char **str, char *nbr, int negative)
{
    int i = 0;

    while (**str >= '0' && **str <= '9') {
        nbr[i] = **str;
        *str += 1;
        i += 1;
    }
    nbr[i] = '\0';
    if (negative == -1 && nbr[0] != '\0')
        return (switch_neg(nbr));
    if (negative == -1 && nbr[0] == '\0')
        nbr[0] = '-';
    return (nbr);
}

char *parse(char **str)
{
    char *nbr = malloc(sizeof(char) * my_strlen(*str));
    int negative = skip_sign(str);

    if (**str == '(') {
        *str += 1;
        free(nbr);
        nbr = eval_expr(str);
        if (**str == ')')
            *str += 1;
        if (negative == -1)
            return (switch_neg(nbr));
        return (nbr);
    }
    return (insert_nbr(str, nbr, negative));
}

char *point_calc(char **str)
{
    char *nbr1 = parse(str);
    char *nbr2;
    char op;

    while (**str == '*' || **str == '/' || **str == '%') {
        op = **str;
        *str += 1;
        nbr2 = parse(str);
        nbr1 = do_op_point(nbr1, op, nbr2);
        free(nbr2);
    }
    return (nbr1);
}

char *eval_expr(char **str)
{
    char *nbr1 = parse(str);
    char *nbr2;
    char op;

    while (**str != '\0' && **str != ')') {
        op = **str;
        *str += 1;
        if (op == '+' || op == '-')
            nbr2 = point_calc(str);
        else
            nbr2 = parse(str);
        nbr1 = do_op_line(nbr1, op, nbr2);
        free(nbr2);
    }
    return (nbr1);
}