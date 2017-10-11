/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** Return an int nb power p computed by a recursive algo
*/

#define INT_MAX 2147483647

int my_compute_power_rec(int nb, int p)
{
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (nb * my_compute_power_rec(nb, p - 1) <= INT_MAX)
		return (nb * my_compute_power_rec(nb, p - 1));
	return (0);
}
