/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** Returns 1 if the int passed as argument is prime and 0 otherwise.
*/

int my_is_prime(int nb)
{
	int i = 0;
	
	if (nb <= 1)
		return (0);
	else if (nb <= 3 && nb > 1)
		return (1);
	else if (!(nb % 2) || !(nb % 3))
		return (0);
	else if (!(nb % 4))
		return (0);
	i = 5;
       	while (i < nb/4) {
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
