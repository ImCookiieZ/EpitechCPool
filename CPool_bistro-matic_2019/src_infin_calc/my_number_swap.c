/*
** EPITECH PROJECT, 2019
** d
** File description:
** f
*/

#include "../include/my.h"

int nb_test_swap(char *nb1, char *nb2)
{
    int digits_nb1 = my_strlen(nb1);
    int digits_nb2 = my_strlen(nb2);

    if (digits_nb1 < digits_nb2)
        return (1);
    for (int i = 0; i < digits_nb1 && digits_nb1 == digits_nb2; i++) {
        if (nb1[i] < nb2[i])
            return (1);
        else if (nb1[i] > nb2[i])
            return (0);
    }
    return (0);
}

int check_fin(char *nb1, char *res, char *nb2)
{
    char *test = my_infin_mult(res, nb2, bigger_number(res, nb2) + 1);

    if (my_strcmp(test, nb1) == 0) {
        free(test);
        return (0);
    }
    free(test);
    return (1);
}

void my_free(char *tmp_sub, char *tmp_res)
{
    free(tmp_sub);
    free(tmp_res);
}