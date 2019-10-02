/*
** EPITECH PROJECT, 2019
** different numbers
** File description:
** 
*/

int my_print_comb(void)
{
    int first_digit=48;
    int second_digit=49;
    int third_digit=50;

    while (first_digit < second_digit && second_digit < third_digit) {
        my_putchar(first_digit);
        my_putchar(second_digit);
        my_putchar(third_digit);
        my_putchar(44);
        my_putchar(32);
        if (third_digit == 57){
            if (second_digit!=56){
                second_digit += 1;
                third_digit = second_digit + 1;
            }
            else {
                if (first_digit != 55){                            
                    first_digit += 1;
                    second_digit = first_digit +1;
                }
                else{
                    return (0);
                }
            }                   
        }
    }
}

int main(void)
{
    return (my_print_comb());
}
