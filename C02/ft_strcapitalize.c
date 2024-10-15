#include <stdio.h>

char	*ft_strcapitalize(char *str);
//int	alphanum(char *c);

int	main(int ac, char *av[])
{
	(void)ac;
	char	*ptr = ft_strcapitalize(av[1]);
	printf("%s", ptr);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	char	*ptr_str;

	i = 0;
	ptr_str = str;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 52 && str[i] <= 64))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (ptr_str);
}
