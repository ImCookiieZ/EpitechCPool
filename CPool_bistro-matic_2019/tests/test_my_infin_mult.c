/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_mult, single_digits)
{
    char *res;
    res = my_infin_mult("2", "1", 2);
    cr_assert_str_eq(res, "2");
}
Test(my_infin_mult, zeros)
{
    char *res;
    res = my_infin_mult("0", "0", 2);
    cr_assert_str_eq(res, "0");
}
Test(my_infin_mult, first_nb_is_zero)
{
    char *res;
    res = my_infin_mult("0", "9", 2);
    cr_assert_str_eq(res, "0");
}