/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Display the number passed as argument in the standard output
*/

int my_put_nbr(int nb)
{
       	int  d = 1;
       	unsigned int n = 0;

	if (nb < 0) {
		n = -nb;
		my_putchar('-');
	} else {
		n =  nb;
	}
	while (d * 10 <= n)
		d *= 10;
	while (n > 9) {
		my_putchar((n / d) + '0');
		n %= d;
		d /= 10;
	}
	my_putchar(n + '0');
	return (0);
}
