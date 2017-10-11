/*
** EPITECH PROJECT, 2017
** my_print_comb.c
** File description:
** print in ascending order all combinations of 3 digits in the ascending order
*/

int my_comb_printr(int n);

int my_print_comb(void)
{
	int n = 0;

	while (n <= 789) {
		if (n / 100 < ((n / 10) % 10)
		    && ((n / 10) % 10) < n % 10)
			my_comb_printr(n);
		n++;
	}
	return (0);
}

int my_comb_printr(int n)
{
	my_putchar(n / 100 + '0');
	my_putchar(((n / 10) % 10) + '0');
	my_putchar(n % 10 + '0');
	if (n != 789) {
		my_putchar(',');
		my_putchar(' ');
	}
}
