/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it.c
** File description:
** Return the factorial of an int passed as an argument
*/

int my_compute_factorial_it(int nb)
{
	int n = nb;

	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (n-- > 1)
		nb *= n;
	return (nb);
}

