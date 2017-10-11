/*
** EPITECH PROJECT, 2017
** make_body.c
** File description:
** 
*/

void my_putchar(char c);

void make_body(int x, int y)
{
	int counter = 0;
	if (y > 2){
		while (++counter < y - 1)
		{
			my_putchar('|');
			for (int counter2 = 0; counter2 < x - 2; counter2++)
				my_putchar(' ');
			if (x > 1)
				my_putchar('|');
			my_putchar('\n');
		}
	}
}

