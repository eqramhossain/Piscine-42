#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int ac, char *av[])
{
	(void)ac;
	int	i;

	i = ft_strcmp(av[1], av[2]);
	printf("%d", i);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
