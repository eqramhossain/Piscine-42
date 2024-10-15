#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	av1[] = "hello hey there";
	char	av2[] = "hey";
	char	*str = ft_strstr(av1, av2);
	printf("%s\n", str);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
//	char	*ptr_str;

	i = 0;
//	ptr_str = str;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
