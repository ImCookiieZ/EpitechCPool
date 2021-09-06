/*
** EPITECH PROJECT, 2019
** y
** File description:
** 
*/

int main(int argc, char **argv)
{
    int i = 0;

    while (argv[i] != '\0')
        i++;
    while (i > 0 ) {
        my_putstr(argv[i-1] );
        my_putchar('\n');
        i--;
    }
    return (0);
}