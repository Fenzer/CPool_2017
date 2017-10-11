/*
** EPITECH PROJECT, 2017
** rush.c
** File description:
** The rush function display a rectangle of x width and y height.
*/

#include <unistd.h>

void my_putchar(char c);

void put_err_msg(void);

void make_body(int x, int y);

void make_head(int x, int y);

void make_tail(int x);

void my_putchar(char c) {
	write(1, &c, 1);
}

void rush(int x, int y)
{
	if (x < 1 || y < 1) {
		put_err_msg();
		return;
	}
	make_head(x,y);
	if (y > 2)
		make_body(x,y);
	if (y > 1)
		make_tail(x);
}

void put_err_msg(void)
{
	write(2,"Invalid size \n", 15);
}

void make_body(int x, int y)
{
	int counter = 0;
	
	while (++counter < y) {
		my_putchar('*');
		for (int counter2 = 0; counter2 < x - 1; counter2++) {
			if (x != 2)
				my_putchar(' ');
		}
		my_putchar('*');
		my_putchar('\n');
	}
}

void make_head(int x, int y)
{
	for (int i = 0; i <= x; i++) {
		
		if (i == 0 && y != 1)
			my_putchar('/');
		else if (i == x && y != 1)
			my_putchar('\\');		
		else if (x != 2)
			my_putchar('*');
		else if (y == 1 && x == 2) {
			my_putchar('*');
			break;
		}
	}
	my_putchar('\n');
}

void make_tail(int x)
{
	for(int i = 0; i <= x; i++) {		
		if (i == 0)
			my_putchar('\\');
		else if (i == x)
			my_putchar('/');		
		else if (x != 2)
			my_putchar('*');
	}
	my_putchar('\n');
}

void main() {
	rush(1,10);
}
