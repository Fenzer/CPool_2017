/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** diplay the string passed as argument in the standard output
*/

int my_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		my_putchar(str[i++]);
	return (0);
}
