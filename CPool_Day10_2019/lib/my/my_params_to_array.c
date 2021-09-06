/*
** EPITECH PROJECT, 2019
** y
** File description:
** y
*/

#include "include/my.h"
#include <unistd.h>
#include <stdlib.h>

struct info_param new_param(char *av)
{
    struct info_param param;

    param.length = my_strlen(av);
    param.str = av;
    param.copy = my_strdup(av);
    param.word_array = my_str_to_word_array(av);
    return (param);
}

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *array = malloc(sizeof(struct info_param) * (ac + 1));

    for (int i = 0; i < ac; i++)
        array[i] = new_param(av[i]);
    return (array);
}