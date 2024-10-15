#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "hello ekram";
	char	dest[12];
	unsigned int	n = 10;
	char	*ptr = ft_strncpy(dest, src, n);
	printf("%s", ptr);
	return(0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char	*ptr_dest;

	i = 0;
	ptr_dest = dest;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (ptr_dest);
}
