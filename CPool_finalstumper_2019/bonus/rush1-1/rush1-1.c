/*
** EPITECH PROJECT, 2019
** 1.1
** File description:
** square
*/

char *rush1_1(int x, int y)
{
    char *out = malloc(sizeof(char) * (x + 1) * y + 1);
    if (x < 1 || y < 1 ) {
        write (2, "Invalid size\n", 14);
    } else {
        erste_letzte_zeile1_1(&out, x, y);
        for (int k = 0; k < y - 2; k++) {
            *out = '|';
            *out++;
            for (int j = 0; j < x - 2; j++) {
                *out = ' ';
                *out++;
            }
            if (x > 1) {
                *out = '|';
                *out++;
                *out = '\n';
                *out++;
            }
        }
        if (y > 1 )
            erste_letzte_zeile1_1(x, y);
    }
    return (out);
}

void erste_letzte_zeile1_1(char **out, int x, int y)
{
    *out = 'o';
    for (int i = 1; i < x - 1; i++) {
        if (x != 2) {
            *out = '-';
        }
        *out++;
    }
    *out++;
    if (x > 1)
        *out = 'o';
    *out++;
    *out = 'o';
    *out++;
    *out = '\n';
}

int main()
{
    printf("%s", rush1_1(2,2));
}