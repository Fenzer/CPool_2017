/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** Return 1 if all the characters of the string are alphabetical and 0 otherwise.
*/

int my_str_isalpha(char const *str)
{
	int i = 0;
	
	while ((str[i] != 0)
	       && (str[i] >= 'A' && str[i] <= 'Z')
	       || (str[i] >= 'a' && str[i] <= 'z'))
		i++; 
	if (str[i] == 0)
		return (1);
	else
		return (0);

}
