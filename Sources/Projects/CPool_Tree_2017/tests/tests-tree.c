/*
** EPITECH PROJECT, 2017
** tests-tree.c
** File description:
** Main that tests the display the tree of size size
*/

#include <unistd.h>

int my_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void print_head(int width)
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < width; j++) {
			if (i - j + width/2 < 0
			    || i + j - width/2 < 0)
				my_putchar(' ');
			else
				my_putchar('#');
		}
		my_putchar('\n');
	}
}

void print_body(int width, int body_height, int size)
{
	int stage = 0;
	
	for (int i = 2; i < body_height; i++) {
		for (int j = 0; j < width; j++) {
			if (i - j + width/2 - stage < 0
			    || i + j - width/2 - stage < 0)
				my_putchar(' ');
			else
				my_putchar('#');
		}
		my_putchar('\n');
	}
}

void print_tail(int size, int width)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < width; j++) {
			if (size % 2 == 0)
				j--;
			if (j < (width - size)/2
			    || j > (width + size)/2)
				my_putchar(' ');
			else
				my_putchar('|');
		}
		my_putchar('\n');
	}
	return;
}

void	tree(int size)
{
	int width = 7;
	int body_height = 0;

	if (size < 1 || size > 200)
		return;
	get_;
	print_head(width);
	print_body(width, body_height, size);
	print_tail(size, width);
	return;
}

int main(void)
{
	tree(3);
	return 0;
}
