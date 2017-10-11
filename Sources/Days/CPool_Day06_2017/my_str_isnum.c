/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** Check if all the characters of the strings are numbers 
** it return 1 in this case and 0 otherwise.
*/

int my_isnum(char *str)
{
	int i = 0;
	
	while (str[i] <= '9' && str[i] >= '0') {
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
