#include <stdio.h>

char	*ft_strlowcase(char *str);
int     ft_str_is_alpha(char *str);

int	main(int ac, char *av[])
{
	(void)ac;
	char	*str = ft_strlowcase(av[1]);
	printf("%s", str);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;
	char	*ptr_str;

	i = 0;
	ptr_str = str;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(&str[i]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (ptr_str);
}

int	ft_str_is_alpha(char *str)
{
	if (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
	}
	return (1);
}