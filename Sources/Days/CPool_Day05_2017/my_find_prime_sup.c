/*
** EPITECH PROJECT, 2017
** my_find_prime_sup.c
** File description:
** Return the first prime number greater or equal to the int passed as an argument
*/

int is_it_prime(int nb)
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

int my_find_next_prime(int nb)
{
	if (is_it_prime(nb))
		return (nb);
	else
		while (!is_it_prime(nb++))
			if (is_it_prime(nb))
			    return (nb);
}
