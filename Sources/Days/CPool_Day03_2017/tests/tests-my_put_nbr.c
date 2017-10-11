/*
** EPITECH PROJECT, 2017
** tests-my_put_nbr.c
** File description:
** main to test my_put_nbr
*/

int main(void)
{
 
	my_put_nbr(110);
	long long n = 1860731308742;
	for (int nb = -21; nb < 21; nb++)
	{
		my_put_nbr(nb);
		my_putchar('\n');
	}
	my_put_nbr(-2147483648);
	my_put_nbr(100);
	my_putchar('\n');
	my_put_nbr(198863900);
	my_putchar('\n');
	my_put_nbr(2147483647);
	my_putchar('\n');
	my_put_nbr(n);
	my_putchar('\n');
	my_put_nbr(-n);
	my_putchar('\n');
}
