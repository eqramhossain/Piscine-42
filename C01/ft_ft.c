#include <unistd.h> 
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	var;

	var = 0;
	ft_ft(&var);
	printf("%d", var);
	return (0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
