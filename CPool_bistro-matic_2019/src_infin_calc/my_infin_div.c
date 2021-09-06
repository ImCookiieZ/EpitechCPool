/*
** EPITECH PROJECT, 2019
** f
** File description:
** gh
*/

#include "../include/my.h"

char    *my_infin_div(char *nb1, char *nb2, int size)
{
    char *res;
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int params[6] = {len1, 0, len2, 0, 0, size - 1};

    if (my_strcmp(nb1, nb2) == 1)
        return (my_strdup("0"));
    if (my_strcmp(nb2, "1") == 0)
        return (my_strdup(nb1));
    if (my_strcmp(nb1, nb2) == 0)
        return (my_strdup("1"));
    else {
        res = malloc(sizeof(char) * (size + 1));
        res[size] = '\0';
        res = my_division(nb1, nb2, res, params);
        res = my_delete_zeros(res);
    }
    return (res);
}

char    *my_division(char *nb1, char *nb2, char *res, int *params)
{
    int i = params[2] - 1;
    char *tmp_div = malloc(sizeof(char) * (params[5] + 1));
    char *tmp_sub;
    char *tmp_res;

    tmp_div = my_strncpy(tmp_div, nb1, params[2]);
    for (int j = 0; nb1[i + params[1]] != '\0'; j++, i++) {
        tmp_res = my_part_div(tmp_div, nb2);
        tmp_sub = my_infin_mult(tmp_res, nb2, my_strlen(nb2) + 1);
        res[j] = tmp_res[0];
        tmp_div = my_infin_sub(tmp_div, tmp_sub, my_strlen(tmp_div), 1);
        if (nb1[i + params[1] + 1] != '\0')
            tmp_div = my_strcat_char(tmp_div, nb1[i + params[1] + 1]);
        my_free(tmp_res, tmp_sub);
        if (check_fin(nb1, res, nb2) == 0)
            break;
        tmp_div = my_delete_zeros(tmp_div);
    }
    free(tmp_div);
    return (res);
}

char    *my_part_div(char *nb1, char *nb2)
{
    char *try = my_strdup("1");
    char *tmp;

    if (my_strcmp(nb1, nb2) == 1) {
        free(try);
        return (my_strdup("0"));
    }
    for (; my_strcmp(try, "9\0") != -1; free(tmp)) {
        tmp = my_infin_mult(nb2, try, bigger_number(nb2, try) + 1);
        if (my_strcmp(tmp, nb1) != 1) {
            if (my_strcmp(tmp, nb1) == -1)
                try = my_infin_sub(try, "1", 2, 1);
            free(tmp);
            return (try);
        }
        try = my_infin_add(try, "1\0", my_strlen(try) + 1, 1);
    }
    free(tmp);
    free(try);
    return (my_strdup("0"));
}