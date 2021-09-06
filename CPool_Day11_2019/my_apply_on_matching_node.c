/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int \
(*f)(), void const * data_ref, int (*cmp)())
{
    for (; begin != NULL; begin = begin->next) {
        if (cmp(data_ref, begin->data) == 0) {
            (f)(begin->data);
        }
    }
    return (0);
}
