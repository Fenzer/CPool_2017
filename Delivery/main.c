/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** This is a main's world
*/

#include <stdio.h>

int product(int n, int x)
{
	if (n == 0)
		return 0;
	else
		return(x + product((n - 1), x));
}

int main(void)
{
	int x = 7;
	for (int i = 0; i < 11; i++)
		printf("7 x %d = %d\n", i, product(i,x));
	return 0;
}
