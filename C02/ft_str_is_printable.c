#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(int ac, char *av[])
{
	(void)ac;
	int	i = ft_str_is_printable(av[1]);
	printf("%d", i);
	return(0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
