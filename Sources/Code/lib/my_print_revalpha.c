/*
** EPITECH PROJECT, 2017
** my_print_rev_alpha.c
** File description:
** print a reverse alphabet
*/

int my_print_revalpha(void)
{
	for (char alpha_letter = 'z'; alpha_letter >= 'a'; alpha_letter--)
		my_putchar(alpha_letter);
	return (0);
}
