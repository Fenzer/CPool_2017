/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** Capitalize all words of the string. 
*/

char *my_strcapitalize(char *str)
{
	int i = 0;

	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			if (i = 0 || str[i - 1] <= ' ')
				str[i] -= 'a' - 'A';
		}
	}
}
