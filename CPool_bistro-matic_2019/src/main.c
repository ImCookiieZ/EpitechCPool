/*
** EPITECH PROJECT, 2019
** main
** File description:
** bistromatic main
*/

#include "../include/my.h"
#include "../include/bistromatic.h"

int   my_atoi(char const *str)
{
    int res = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i += 1)
        res = res * 10 + str[i] - 48;
    return (res);
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_base_ops(char const *b, char const *ops)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

int check_len(int ac, char *av0)
{
    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av0);
        my_putstr(" base ops\"()+_/%\" exp_len\n");
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    int size;
    char *expr;

    if (check_len(ac, av[0]))
        return (84);
    check_base_ops(av[1], av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    if (base_error(av[1], av[2]) == 1 || expr_error(expr) == 1 || \
unknown_number(expr, av[2], av[1]) == 1) {
        my_putstr(SYNTAX_ERROR_MSG);
        return (84);
        }
    expr = base_convert(expr, av[1], DECIMAL);
    expr = base_convert(expr, av[2], OPS);
    expr = eval_expr(&expr);
    expr = base_convert(expr, DECIMAL, av[1]);
    my_putstr(expr);
    free(expr);
    return (EXIT_SUCCESS);
}