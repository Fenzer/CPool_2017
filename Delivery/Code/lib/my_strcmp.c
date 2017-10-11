/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** Compare each strings characters and return the difference of ascii value
** or 0 if the strings are equal.
*/

int my_strcomp(char const *s1, char const *s2)
{
       	int i = 0;
	
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
	{
		while(s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
		{
			i++;
			if (s1[i] == s2[i] && (s1[i] == '\0' || s2[i] != '\0'))
				return (0);
			if(s2[i] != s1[i])
				return (s1[i] - s2[i]);
		}
	}

}
