/*
** EPITECH PROJECT, 2019
** task06
** File description:
** insertionsort
*/

void my_sort_int_array(int *array2, int size)
{
    int temp = 0;
    int *pnttemp = &temp;
    int *array = array2;

    for (int i = 1; i < size; i++) {
        while ( i > 0 && array[i - 1] > array[i]) {
            pnttemp = array[i-1];
            array[i - 1] = array[i];
            array[i] = pnttemp;
            i--;
        }
    }
}