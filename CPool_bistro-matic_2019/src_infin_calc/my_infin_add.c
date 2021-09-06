/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "../include/my.h"

char *my_insertion_add(char *nb1, char *nb2, char *res, int *params)
{
    if (params[0] == params[1]) {
        res[params[5]] = nb2[params[2] - 1] + params[4];
        params[0]++;
    }
    else if (params[2] == params[3]) {
        res[params[5]] = nb1[params[0] - 1] + params[4];
        params[2]++;
    }
    else {
        res[params[5]] = nb1[params[0] - 1] + \
nb2[params[2] - 1] - 48 + params[4];
    }
    return (res);
}

char	*my_addition(char *nb1, char *nb2, char *res, int *params)
{
    while (params[0] > params[1] || params[2] > params[3]) {
        res = my_insertion_add(nb1, nb2, res, params);
        params[4] = 0;
        if (res[params[5]] > '9') {
            res[params[5]] -= 10;
            params[4]++;
        }
        params[0]--;
        params[2]--;
        params[5]--;
    }
    if (params[4] == 1)
        res[params[5]] = 49;
    return (res);
}

char    *my_infin_add(char *nb1, char *nb2, int size, int mult)
{
    char *res = malloc(sizeof(char) * (size + 1));
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int rest = 0;
    int params[6] = {len1, 0, len2, 0, rest, size - 1};

    for (int j = 0; j < size; j++)
        res[j] = '0';
    res = my_addition(nb1, nb2, res, params);
    res[size] = '\0';
    res = my_delete_zeros(res);
    if (mult == 1)
        free(nb1);
    return (res);
}