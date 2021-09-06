/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;
