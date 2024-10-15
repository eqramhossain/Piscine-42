#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int ac, char *av[])
{
	(void)ac;
	int	i;
	unsigned int a = 4;

	i = ft_strncmp(av[1], av[2], a);
	printf("%d", i);
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' && s2[i] != '\0'))
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
