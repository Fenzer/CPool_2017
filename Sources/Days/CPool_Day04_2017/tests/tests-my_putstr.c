/*
** EPITECH PROJECT, 2017
** tests-my_putstr.c
** File description:
** test the function my_putstr
*/

#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c ,1);
	return (0);
}

int my_putstr(char const *str)
{
	char *ptr = str;
	
	while (*ptr)
		my_putchar(*ptr++);
	return (0);
}

int main(int ac, char **av)
{
	for (int i = 0; i < ac; i++) {
		my_putstr(av[i]);
		my_putstr("\n");
	}
	return (0);
}
