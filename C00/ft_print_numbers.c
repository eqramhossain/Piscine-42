#include <unistd.h>

void ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

void ft_print_numbers(void)
{
	char	c;
	
	c = '1';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
