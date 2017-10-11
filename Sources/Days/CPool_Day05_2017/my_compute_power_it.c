/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** Return an int nb power n computed iteratively.
*/

int my_compute_power_it(int nb, int p)
{
	int buf = nb;
	
	if (p < 0)
		return (0);
	else if (p == 0)
		return (1);
	else if (p == 1)
		return (nb);
	else {
		for (int i = 1; i < p; i++)
			nb *= buf;
	}
	return (nb);
}
