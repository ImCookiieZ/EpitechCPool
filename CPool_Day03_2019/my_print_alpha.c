/*
** EPITECH PROJECT, 2019
** my_aloha
** File description:
** nop
*/

int my_print_alpha(void)
{
    int my_char = 97;

    while (my_char < 123) {
        my_putchar(my_char);
        my_char += 1;
    }
    return (0);
}