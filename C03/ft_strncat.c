#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
unsigned int	ft_strlen(char *str);

int	main(void)
{
	char	dest[] = "hey ";
	char	src[] = "hello world!";
	unsigned int	i = 5;
	char	*ptr_dest = ft_strncat(dest, src, i);

	printf("%s\n", ptr_dest);
	printf("%s", dest);
	return (0);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	char	*c;

	i = 0;
	j = ft_strlen(dest);
	c = dest;
	while ((i < nb) && src[i] != '\0')
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
