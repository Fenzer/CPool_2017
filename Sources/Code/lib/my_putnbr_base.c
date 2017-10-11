/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** Display a number given is base of numeration
*/

int base_len(char *base, int n)
{
	if (!(*base))
		return (n);
	return(base_len(base--,n++));
}

void my_putnbr_base(int nbr, char *base)
{
	int base = base_len(base,1);
	while (nbr) 
	return;
}

int main(void) {
	int nb = 10;
	char *base = "12345678910";
	my_putnbr_base(nb, base);
}
