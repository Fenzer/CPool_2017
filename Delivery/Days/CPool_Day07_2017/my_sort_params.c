void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	while (*str != 0) {
		ft_putchar(*str);
		str++;
	}
}

in	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] == s2[i]
	       && (s1[i] != '\0' && s2[i] != '\0')) {
		i++;
		if (s1[i] == s2[i] && s1[i] == '\0')
			return (0);
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void my_arg_comp(int argc, char **argv)
{
	int		i;
	char	*tps;

	i = 0;
	while (i < argc - 1) {
		if (ft_strcmp(argv[i], argv[i + 1]) > 0) {
			tps = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tps;
			i = 0;
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc > 0) {
		ft_arg_comp(argc, argv);
		while (i < argc) {
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
