/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_sub, second_nb_is_zero)
{
    char *res;
    res = my_infin_sub("90", "0", 3, 0);
    cr_assert_str_eq(res, "90");
}

Test(my_infin_sub, big_numbers)
{
    char *res;
    res = my_infin_sub("987654321123456789", "123456789987654321", 19, 0);
    cr_assert_str_eq(res, "864197531135802468");
}

Test(my_infin_sub, miggig_nb1)
{
    char *res;
    res = my_infin_sub("", "9", 2, 0);
    cr_assert_str_eq(res, "9");
}

Test(my_infin_sub, missing_nb2)
{
    char *res;
    res = my_infin_sub("90", "", 2, 0);
    cr_assert_str_eq(res, "90");
}