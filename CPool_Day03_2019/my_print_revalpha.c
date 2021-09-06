/*
** EPITECH PROJECT, 2019
** my_aloha
** File description:
** nop
*/

int my_print_revalpha(void)
{
    int my_char = 122;

    while (my_char > 96) {
        my_putchar(my_char);
        my_char--;
    }
    return (0);
}
