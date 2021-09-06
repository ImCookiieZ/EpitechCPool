/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_add, single_digits)
{
    char *res;
    res = my_infin_add("2", "1", 2, 0);
    cr_assert_str_eq(res, "3");
}
Test(my_infin_add, zeros)
{
    char *res;
    res = my_infin_add("0", "0", 2, 0);
    cr_assert_str_eq(res, "0");
}
Test(my_infin_add, first_nb_is_zero)
{
    char *res;
    res = my_infin_add("0", "9", 2, 0);
    cr_assert_str_eq(res, "9");
}