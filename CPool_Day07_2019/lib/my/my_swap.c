/*
** EPITECH PROJECT, 2019
** 
** File description:
** task 01
*/

void my_swap(int *a, int*b)
{
    int  temp = 0;
    int *pnttemp = &temp;

    *pnttemp = *a;
    *a = *b;
    *b = *pnttemp;
}