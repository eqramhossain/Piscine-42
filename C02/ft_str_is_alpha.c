#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(int ac, char *av[])
{
	(void)ac;
	int	i = ft_str_is_alpha(av[1]);
	printf("%d", i);
	return(0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
