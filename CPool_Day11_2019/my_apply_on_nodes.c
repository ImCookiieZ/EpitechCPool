/*
** EPITECH PROJECT, 2019
** d
** File description:
** d
*/

#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    for (; begin != NULL; begin = begin->next)
        (f)(begin->data);
    return (0);
}
