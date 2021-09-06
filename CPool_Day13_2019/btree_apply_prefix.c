/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

#include "include/btree.h"
#include "include/my.h"

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    if (root != NULL) {
        applyf(root->item);
        btree_apply_prefix(root->right, applyf);
        btree_apply_prefix(root->left, applyf);
    }
}
