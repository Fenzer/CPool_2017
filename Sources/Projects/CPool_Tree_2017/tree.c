/*
** EPITECH PROJECT, 2017
** tree.c
** File description:
** Display a firtree of size size
*/



int my_putchar(char c);

void print_head(int width, int body_height)
{
	for (int i = 0; i < body_height; i++) {
		for (int j = 0; j < width; j++) {
			if (i - j + width/2 < 0
			    || i + j - width/2 < 0)
				my_putchar(' ');
			else
				my_putchar('*');
		}
		my_putchar('\n');
	}
}

void print_tail(int size, int width)
{
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < width; j++) {
			if (j < (width - size)/2
			    || j >= (width + size)/2)
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
	int width;
	int body_height;
	
	body_height = size * 4 + (size - 1);
	if (size % 2 == 0)
		width = size * 7 - 1;
	else
		width = size * 7;
	print_head(width, body_height);
	print_tail(size, width);
	return;
}
