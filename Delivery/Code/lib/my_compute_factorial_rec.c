/*
** EPITECH PROJECT, 2017
** my_compute_factorial_rec.c
** File description:
** Return the factorial of an int passed as an argument computed by a recursive 
** algorit 
*/

int my_compute_factorial_rec(int nb)
{
	if (nb >= 13 || nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * my_compute_factorial_rec(nb - 1));
}
