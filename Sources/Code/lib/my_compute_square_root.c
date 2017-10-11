/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** Compute the square root of the int passed as an argument and return it
*/

int my_compute_square_root(int nb)
{
	int root = 1;

	if (nb == 0 || nb == 1)
		return (nb);
	while (root++ < nb / 2)
	{
		if (root * root == nb)
			return (root);
	}
	return (0);
}
