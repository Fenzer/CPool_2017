/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** This function Swaps the content of two integers whose adresses are given as a parameter
*/

void my_swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
