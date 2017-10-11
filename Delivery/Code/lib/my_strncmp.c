/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** Same as strcmp until n character.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
	if(s1[i] != s2[i] && i < n)
		return (s1[i]);
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (s1[i] == s2[i] && i < n)
			return (0);
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);	
	}

}
