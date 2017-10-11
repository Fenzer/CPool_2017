/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
** Print the alphabet
*/

int my_print_alpha(void)
{
	for (char alpha_letter = 'a'; alpha_letter <= 'z'; alpha_letter++) {
		my_putchar(alpha_letter);
	}
	return (0);
}
