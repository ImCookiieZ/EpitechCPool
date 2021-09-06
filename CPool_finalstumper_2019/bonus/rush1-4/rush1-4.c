/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int rush(int x, int y)
{
    if (x < 1 || y < 1 ) {
        write (2, "Invalid size\n", 14);
    } else {
        if (x == 1) {
            for (int i = 0; i < y; i++) {
                my_putchar('B');
                my_putchar('\n');
            }
        }
        if (x != 1 && y == 1) {
            for (int i = 0; i < x; i++) {
                my_putchar('B');
            }
            my_putchar('\n');
        }
        mitte(x, y);
    }
}

void erste_zeile(int x)
{
    my_putchar('A');
    for (int i = 0; i < x - 2; i++)
        my_putchar('B');
    if (x > 1)
        my_putchar('C');
    my_putchar('\n');
}

void letzte_zeile(int x)
{
    my_putchar('A');
    for (int i = 0; i < x - 2; i++)
        my_putchar('B');
    if (x > 1)
        my_putchar('C');
    my_putchar('\n');
}

void mitte(int x, int y)
{
    if (x > 1 && y > 1) {
        erste_zeile(x);
        for (int k = 0; k < y - 2; k++) {
            my_putchar('B');
            for (int j = 0; j < x - 2; j++)
                my_putchar(' ');
            my_putchar('B');
            my_putchar('\n');
        }
        letzte_zeile(x);
    }
}
