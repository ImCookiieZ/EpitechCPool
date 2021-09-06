/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/mylist.h"

int my_put_in_list(linked_list_t **list, char *av)
{
    linked_list_t *element;

    element = malloc(sizeof(list));
    element->data = av;
    element->next = *list;
    *list = element;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;

    for (int i = 0; i < ac; i++) {
        my_put_in_list(&list, av[i]);
    }
    return (list);
}
