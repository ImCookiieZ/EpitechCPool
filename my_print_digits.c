/*
** EPITECH PROJECT, 2019
** digits
** File description:
** 
*/

int my_print_digits(void)
{
    char my_digit='0';

    while (my_digit <= '9') { 
        my_putchar(my_digit);
        my_digit++;
    }
    return(0);
}
