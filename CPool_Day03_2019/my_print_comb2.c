/*
** EPITECH PROJECT, 2019
** 00 01
** File description:
** nop
*/

int my_print_comb2 (void)
{
    int first_digit = 48;
    int second_digit = 48;
    int third_digit = 48;
    int forth_digit = 49;
    int ret;

    ret = whileloop (first_digit, second_digit, third_digit, forth_digit);
    return (ret);
}

int whileloop (int first_digit, int \
second_digit, int third_digit, int forth_digit)
{
    int i = 0;

    while (1) {
        if (first_digit == 57 && second_digit == 57){
            return (0);
        }
        else {
            if (((first_digit == \
third_digit) == 0) || ((second_digit == forth_digit)) == 0) {
                my_putchar(first_digit);
                my_putchar(second_digit);
                my_putchar(32);
                my_putchar(third_digit);
                my_putchar(forth_digit);
                if (!((first_digit == 57) && (second_digit == 56))) {
                    my_putchar(44);
                    my_putchar(32);
                }
                else {
                    my_putchar('\n');
                }
            }
        }
        if (forth_digit == 57){
            if (third_digit == 57) {
                if (second_digit == 57) {
                    first_digit += 1;
                    second_digit = 48;
                    third_digit = first_digit;
                    forth_digit = 49;
                }
                else {
                    second_digit += 1;
                    if (second_digit == 57) {
                        forth_digit = 48;
                        third_digit = first_digit + 1;
                    }
                    else{
                        third_digit = first_digit;
                        forth_digit = second_digit +1;
                    }
                }
            }
            else {
                third_digit += 1;
                forth_digit = 48;
            }
        }
        else {
            forth_digit += 1;
        }
    }
}