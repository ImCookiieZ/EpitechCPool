/*
** EPITECH PROJECT, 2019
** eval_expr_add
** File description:
** add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(eval_expr, single_digits_div)
{
    char *res;
    char *str = "2/1";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "2");
}
Test(eval_expr, negative_div)
{
    char *res;
    char *str = "-2/1";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "-2");
}
Test(eval_expr, big_div)
{
    char *res;
    char *str = "444444444444444444444444444444/444444444444444444444444444444";
    res = eval_expr(&str);
    cr_assert_str_eq(res, "1");
}
