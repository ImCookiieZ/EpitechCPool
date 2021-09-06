/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_div, single_digits)
{
    char *res;
    res = my_infin_div("2", "1", 2);
    cr_assert_str_eq(res, "2");
}
Test(my_infin_div, first_nb_is_zero)
{
    char *res;
    res = my_infin_div("0", "9", 2);
    cr_assert_str_eq(res, "0");
}
Test(my_infin_div, big_numbers_input)
{
    char *res;
    res = my_infin_div("987654321", "123456789", 10);
    cr_assert_str_eq(res, "8");
}
Test(my_infin_div, missinig_nb1)
{
    char *res;
    res = my_infin_div("", "9", 2);
    cr_assert_str_eq(res, "0");
}

Test(my_infin_div, big_numbers_output)
{
    char *res;
    res = my_infin_div("987654321", "1", 10);
    cr_assert_str_eq(res, "987654321");
}