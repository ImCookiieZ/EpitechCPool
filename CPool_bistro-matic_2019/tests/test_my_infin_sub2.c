/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_sub, single_digits)
{
    char *res;
    res = my_infin_sub("2", "1", 2, 0);
    cr_assert_str_eq(res, "1");
}

Test(my_infin_sub, zeros)
{
    char *res;
    res = my_infin_sub("0", "0", 2, 0);
    cr_assert_str_eq(res, "0");
}

Test(my_infin_sub, first_nb_is_zero)
{
    char *res;
    res = my_infin_sub("0", "9", 2, 0);
    cr_assert_str_eq(res, "9");
}