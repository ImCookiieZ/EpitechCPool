/*
** EPITECH PROJECT, 2019
** s
** File description:
** s
*/

int my_check(char *nb)
{
	int temp = 0;
	for (int i = 0; nb[i] != '\0'; i++) {
		if ((nb[i] > '9' || nb[i] < '0') && nb[i] != '-')
			break;
		if (nb[i] != '-')
			temp++;
	}
	if (temp == 0)
		return (0);
	return (1);
}

int check_error(int ac, char *nb1, char *opp, char *nb2)
{
	if (my_check(nb1) == 0 && my_check(nb2) == 0) {
		my_putchar('0');
		return (84);
	}
	if (my_strcmp("*", opp) != 0 && my_strcmp("+", opp) != 0 \
	    && my_strcmp(opp, "-") != 0 && my_strcmp(opp, "/") != 0\
	    && my_strcmp(opp, "%") != 0) {
		my_putchar('0');
		return (84);
	}
	return (0);
}

int math_op(char *nb1, char *opp, char *nb2)
{
	int int_nb1 = my_getnbr(nb1);
	int int_nb2 = my_getnbr(nb2);
	int res = 0;

	if (my_strcmp("+", opp) == 0)
		res  = int_nb1 + int_nb2;
	if (my_strcmp("-", opp) == 0)
		res  = int_nb1 - int_nb2;
	if (my_strcmp("*", opp) == 0)
		res = int_nb1 * int_nb2;
	if (my_strcmp(opp, "/") == 0) {
		if (int_nb2 == 0) {
			my_putstr("Stop: division by zero");
			return (84);
		}
		res = int_nb1 / int_nb2;
	}
	if (my_strcmp(opp, "%") == 0) {
		if (int_nb2 == 0) {
			my_putstr("Stop: modulo by zero");
			return (84);
		}
		res  = int_nb1 % int_nb2;
	}
	my_put_nbr(res);
	return (0);
}

int main(int argc, char **argv)
{
	int my_error;

	if (argc != 4) {
		return (84);
	}
	if (check_error(argc, argv[1], argv[2], argv[3]) == 84)
		return (84);
	my_error = math_op(argv[1], argv[2], argv[3]);
	if (my_error == 84)
		return (84);
	return (0);
}
