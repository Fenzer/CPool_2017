/*
** EPITECH PROJECT, 2017
** lol 
** File description:
** looool
*/


int main()
{
	int a = 10;
	int b = 20;

	my_putstr("Before swap :");
	my_putstr("\nA =");
	my_putnbr(a);
	my_putstr("\nB =");
	my_putnbr(b);
	my_putstr("\n");
	my_swap(&a,&b);
	my_putstr("After swap :");
	my_putstr("\nA =");
	my_putnbr(a);
	my_putstr("\nB =");
	my_putnbr(b);
	my_putstr("\n");
	my_putstr("Length of the string 'wooow':");
	my_putnbr(my_strlen("wooow"));
	my_putstr("\nString before evil_str :");
	my_putstr("abcdefgh");
	my_putstr("\nString after evil_str :");
	my_putstr(my_evil_str("abcdefgh"));
	
	return (0);
}
