/*
** EPITECH PROJECT, 2019
** y
** File description:
** y
*/

#include <criterion/criterion.h>

Test (my_strncpy, lol)
{
    char my_dest[6] = {0};
    char dest[6] = {0};

    my_strncpy(my_dest, "Hello", 6);
    strncpy(dest, "Hello", 6);
    cr_assert_str_eq(my_dest, dest);
}
