/*
** EPITECH PROJECT, 2019
** 1.1
** File description:
** square
*/

void rush(int x, int y)
{
    if (x < 1 || y < 1 ) {
        write (2, "Invalid size\n", 14);
    } else {
        erste_letzte_zeile(x, y);
        for (int k = 0; k < y - 2; k++) {
            my_putchar('|');
            for (int j = 0; j < x - 2; j++)
                my_putchar(' ');
            if (x > 1)
                my_putchar('|');
            my_putchar('\n');
        }
        if (y > 1 )
            erste_letzte_zeile(x, y);
    }
}

void erste_letzte_zeile(int x, int y)
{
    my_putchar('o');
    for (int i = 0; i < x - 2; i++) {
        if (x != 1) {
            my_putchar('-');
        }
    }
    if (x > 1)
        my_putchar('o');
    my_putchar('\n');
}
