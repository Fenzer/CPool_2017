/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** Capitalize all the letters of the string passed as argument.
*/

char *my_strupcase(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			*str -= 'a' - 'A';
		i++;
	}
	return(str)
}
