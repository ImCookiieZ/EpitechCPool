/*
** EPITECH PROJECT, 2019
** eval_expr_add
** File description:
** add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(eval_expr, comb1)
{
    char *res;
    char *str = "(2--1)*4";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "12");
}
Test(eval_expr, comb2)
{
    char *res;
    char *str = "-2*(3*2+4)/2";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "-10");
}
Test(eval_expr, comb3)
{
    char *res;
    char *str = "(12-14)/(15-14)";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "-2");
}
Test(eval_expr, comb4)
{
    char *res;
    char *str = "--42-42--42";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "42");
}