#include <stdio.h>

int	ft_strlen(char *str);

int	main(int ac, char *av[])
{
	(void)ac;
	int	i = ft_strlen(av[1]);
	printf("%d", i);
	return(0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
