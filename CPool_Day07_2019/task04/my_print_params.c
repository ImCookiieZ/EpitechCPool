/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return (0);   
}