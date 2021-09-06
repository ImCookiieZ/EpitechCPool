/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

char    **my_sort_int_array2(char **array2)
{
    int temp = 0;
    int *pnttemp = &temp;
    char **array = array2;

    for (int i = 1; array[i] != '\0'; i++) {
        while (i > 0 && array[i - 1][0] > array[i][0]) {
            pnttemp = array [i - 1];
            array [i - 1] = array[i];
            array[i] = pnttemp;
            i--;
        }
    }
    return (array);
}

int main(int argc, char **argv)
{
    char **print_args = my_sort_int_array2(argv);

    for (int i = 0; i < argc; i++) {
        my_putstr(print_args[i]);
        my_putchar('\n');
        }
    return (0);
}