/*
** EPITECH PROJECT, 2019
** base_convert
** File description:
** base to digit
*/

#include "../include/bistromatic.h"
#include "../include/my.h"

int expr_error(char *expr)
{
    int counter = 0;
    int i = 0;

    if (!my_str_isprintable(expr)) {
        return (1);
    }
    for (i = 0; expr[i] != '\0'; i += 1) {
        if (expr[i] == '(')
            counter += 1;
        if (expr[i] == ')')
            counter -= 1;
    }
    if (counter != 0)
        return (1);
    return (0);
}

int unknown_number(char *expr, char *ops, char *base)
{
    int i = 0;
    int j = 0;
    int contains = 0;
    int len = my_strlen(ops) + my_strlen(base);
    char *base_ops = malloc(sizeof(char) * (len + 1));

    base_ops[len] = '\0';
    base_ops = my_strcpy(base_ops, base);
    base_ops = my_strcat(base_ops, ops);
    for (i = 0; expr[i] != '\0'; i += 1) {
        for (j = 0; base_ops[j] != '\0'; j += 1) {
            if (expr[i] == base_ops[j])
                contains = 1;
        }
        if (contains == 0)
            return (1);
        contains = 0;
    }
    free(base_ops);
    return (0);
}

int base_error(char *base, char *ops)
{
    int i = 0;
    int j = 0;

    for (i = 0; base[i] != '\0'; i += 1) {
        for (j = 0; ops[j] != '\0'; j += 1) {
            if (base[i] == ops[j])
                return (1);
        }
    }
    if (check_double(base) || check_double(ops))
        return (1);
    if (!my_str_isprintable(base) || !my_str_isprintable(ops))
        return (1);
    return (0);
}

int check_double(char *base)
{
    int i = 0;
    int j = 0;

    for (i = 0; base[i] != '\0'; i += 1) {
        for (j = i + 1; base[j] != '\0'; j += 1) {
            if (base[i] == base[j])
                return (1);
            }
    }
    return (0);
}

char *base_convert(char *expr, char *base, char *dest)
{
    char *new_expr = malloc(sizeof(char) * (my_strlen(expr) + 1));
    int j = 0;
    int match = 0;

    for (int i = 0; expr[i] != '\0'; i += 1) {
        for (j = 0; base[j] != '\0'; j += 1) {
            if (expr[i] == base[j]) {
                match = 1;
                break;
            }
        }
        if (match)
            new_expr[i] = dest[j];
        else
            new_expr[i] = expr[i];
        match = 0;
    }
    new_expr[my_strlen(expr)] = '\0';
    free(expr);
    return (new_expr);
}