/*
** EPITECH PROJECT, 2019
** nice
** File description:
** o
*/

void my_put_nbr(int nb)
{
	if (nb < 0) {
		my_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		my_put_nbr(nb / 10);
	my_putchar(nb % 10 + 48);
}
