#include <stdio.h>

char	*ft_strcat(char *dest, char *src);
unsigned int	ft_strlen(char *str);

int	main(void)
{
	char	dest[] = "hey";
	char	src[] = "hello world!";
	char	*ptr_dest = ft_strcat(dest, src);

	printf("%s\n", ptr_dest);
	printf("%s", dest);
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	char	*c;

	i = 0;
	j = ft_strlen(dest);
	c = dest;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (c);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
