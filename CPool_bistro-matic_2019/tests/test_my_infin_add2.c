/*
** EPITECH PROJECT, 2019
** test
** File description:
** infin_add
*/

#include <criterion/criterion.h>
#include "../include/my.h"

Test(my_infin_add, second_nb_is_zero)
{
    char *res;
    res = my_infin_add("90", "0", 3, 0);
    cr_assert_str_eq(res, "90");
}
Test(my_infin_add, big_numbers)
{
    char *res;
    res = my_infin_add("987654321", "123456789", 10, 0);
    cr_assert_str_eq(res, "1111111110");
}
Test(my_infin_add, miggig_nb1)
{
    char *res;
    res = my_infin_add("", "9", 2, 0);
    cr_assert_str_eq(res, "9");
}
Test(my_infin_add, missing_nb2)
{
    char *res;
    res = my_infin_add("90", "", 2, 0);
    cr_assert_str_eq(res, "90");
}