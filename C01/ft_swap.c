#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 24;
	int	b = 42;

	ft_swap(&a, &b);
	printf("%d and %d", a, b);
}

void	ft_swap(int *a, int *b)
{
	int	swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
