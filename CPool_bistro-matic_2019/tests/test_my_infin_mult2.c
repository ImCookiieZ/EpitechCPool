/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_mult, second_nb_is_zero)
{
    char *res;
    res = my_infin_mult("90", "0", 3);
    cr_assert_str_eq(res, "0");
}
Test(my_infin_mult, big_numbers)
{
    char *res;
    res = my_infin_mult("987654321", "123456789", 10);
    cr_assert_str_eq(res, "121932631112635269");
}
Test(my_infin_mult, missinig_nb1)
{
    char *res;
    res = my_infin_mult("", "9", 2);
    cr_assert_str_eq(res, "0");
}
Test(my_infin_mult, missing_nb2)
{
    char *res;
    res = my_infin_mult("90", "", 2);
    cr_assert_str_eq(res, "0");
}