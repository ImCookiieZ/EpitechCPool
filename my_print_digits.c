/*
** EPITECH PROJECT, 2019
** digits
** File description:
** nop
*/

int my_print_digits(void)
{
    char my_digit = 48;

    while (my_digit <= 57) {
        my_putchar(my_digit);
        my_digit++;
    }
    return (0);
}
