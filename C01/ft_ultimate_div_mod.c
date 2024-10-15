#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a = 45;
	int	b = 5;
	ft_ultimate_div_mod(&a,&b);
	printf("div = %d and mod = %d", a, b);
	return (0);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div = *a / *b;
	int	mod = *a % *b;

	*a = div;
	*b = mod;
}
