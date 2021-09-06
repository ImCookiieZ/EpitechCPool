/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_mod, single_digits)
{
    char *res;
    res = my_infin_mod("9", "5", 2);
    cr_assert_str_eq(res, "4");
}
Test(my_infin_mod, first_nb_is_zero)
{
    char *res;
    res = my_infin_mod("23", "2", 2);
    cr_assert_str_eq(res, "1");
}
Test(my_infin_mod, big_numbers_input)
{
    char *res;
    res = my_infin_mod("987654321", "123456789", 10);
    cr_assert_str_eq(res, "9");
}
Test(my_infin_mod, missinig_nb1)
{
    char *res;
    res = my_infin_mod("", "9", 2);
    cr_assert_str_eq(res, "0");
}

Test(my_infin_mod, big_numbers_output)
{
    char *res;
    res = my_infin_mod("987654321", "10000000000", 11);
    cr_assert_str_eq(res, "987654321");
}