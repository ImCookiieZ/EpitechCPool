/*
** EPITECH PROJECT, 2019
** s
** File description:
** f
*/

#include "../include/my.h"

char    *my_infin_mult(char *nb1, char *nb2, int size)
{
    char *res;
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int params[6] = {len1, 0, len2, 0, 0, size - 1};

    if (my_strcmp(nb1, "0") == 0 || my_strcmp(nb2, "0") == 0)
        return (my_strdup("0"));
    res = my_multiplication(nb1, nb2, params);
    res = my_delete_zeros(res);
    return (res);
}

char    *my_multiplication(char *nb1, char *nb2, int *params)
{
    char *res = malloc(sizeof(char) * (params[5] * 2));
    int i = params[0] - 1;
    int j = params[2] - 1;
    char *digit;

    res[0] = '0';
    res[1] = '\0';
    for (; i + 1 - params[1] != 0; i--, j = params[2] - 1) {
        while (j + 1 -params[3] != 0) {
            digit = my_mult_digit(nb1[i], nb2[j], params);
            digit = my_zero_adding(digit, params[0] - i - 1, params[2] - j - 1);
            digit = my_delete_zeros(digit);
            res = my_infin_add(res, digit, params[5] * 2, 1);
            j--;
            free(digit);
        }
    }
    if (res[0] == '\0')
        return (my_strdup("0"));
    return (res);
}

char    *my_mult_digit(char nb1, char nb2, int *params)
{
    char *digit_res = malloc(sizeof(char) * 2 + 1);
    int digit = (nb1 - 48) * (nb2 - 48);

    digit_res[1] = digit % 10 + 48;
    digit_res[0] = digit / 10 + 48;
    digit_res[2] = '\0';
    return (digit_res);
}