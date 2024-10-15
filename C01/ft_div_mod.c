#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a = 45;
	int	b = 5;
	int	div = 0;
	int	mod = 0;
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d and mod = %d", div, mod);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
