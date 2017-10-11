/*
** EPITECH PROJECT, 2017
** rush.c
** File description:
** The rush function display a rectangle of x width and y heigh
*/

void put_err_msg(void)
{
	write(2,"Invalid size \n", 15);
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
	if ((x > 1) && (y >= 2))
		make_tail(x);
}

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
