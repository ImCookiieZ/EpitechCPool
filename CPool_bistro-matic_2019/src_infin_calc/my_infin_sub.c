/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "../include/my.h"

char *my_sub_insertion(char *nb1, char *nb2, char *res, int *params)
{
    if (params[0] == params[1]) {
        res[params[5]] = nb2[params[2] - 1] - params[4];
        params[0]++;
    }
    else if (params[2] == params[3]) {
        res[params[5]] = nb1[params[0] - 1] - params[4];
        params[2]++;
    } else {
        res[params[5]] = nb1[params[0] - 1] - \
nb2[params[2] - 1] - params[4] + 48;
    }
    return (res);
}

char    *my_substraction(char *nb1, char *nb2, char *res, int *params)
{
    while (params[0] > params[1] || params[2] > params[3]) {
        res = my_sub_insertion(nb1, nb2, res, params);
        params[4] = 0;
        if (res[params[5]] < '0') {
            res[params[5]] += 10;
            params[4]++;
        }
        params[0]--;
        params[2]--;
        params[5]--;
    }
    return (res);
}

char    *my_infin_sub(char *nb1, char *nb2, int size, int div)
{
    char *res = malloc(sizeof(char) * (size + 1));
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int params[6] = {len1, 0, len2, 0, 0, size - 1};

    if (nb_test_swap(nb1, nb2) == 1) {
        free(res);
        if (div == 1)
            return (my_infin_sub(nb2, nb1, size, 2));
        return (my_infin_sub(nb2, nb1, size , 0));
    }
    for (int j = 0; j <= size; j++)
        res[j] = '0';
    res[size] = '\0';
    res = my_substraction(nb1, nb2, res, params);
    res = my_delete_zeros(res);
    if (div == 1)
        free(nb1);
    else if (div == 2)
        free(nb2);
    return (res);
}