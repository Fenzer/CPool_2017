/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** Lowcase every characters of the string.
*/

char *my_strlowcase(char *str)
{
	int i = 0;
	
	while (str[i]) {
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' -  'A';
	}
	return (str);
}
