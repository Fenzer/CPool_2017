/*
** EPITECH PROJECT, 2017
** make_head.c
** File description:
** Make the first line of the square(for make_head). Make the last line of the square(for make_tail).
*/

void my_putchar(char c);

void make_head(int x)
{
	for (int counter = 0; counter <= x - 1; counter++) {		
		if ((counter == 0) || (counter == x - 1)) 
			my_putchar('o');
		else if ((counter >> 0) && (counter << x))
			my_putchar('-');
		else my_putchar('o');
	}
	my_putchar('\n');
}

void make_tail(int x)
{
	for(int counter2 = 0; counter2 <= x - 1; counter2++) {		
		if ((counter2 == 0) || (counter2 == x - 1))
			my_putchar('o');
		else my_putchar('-');
	}
	my_putchar('\n');
}
