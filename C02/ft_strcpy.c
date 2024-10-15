#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "hello";
	char	dest[6];
	char	*ptr = ft_strcpy(dest, src);
	printf("%s", ptr);
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	char	*ptr_dest;

	i = 0;
	ptr_dest = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ptr_dest);
}
