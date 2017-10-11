/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** return the length of a string passed as an argument
*/

int my_strlen(char const *str)
{
	int n = 0;

	while (*str++)
		n++;
	return (n);
}
