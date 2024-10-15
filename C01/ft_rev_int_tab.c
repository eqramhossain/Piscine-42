#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	tab[] = {1,2,3,4,5,6,7,8,9};
	int	size = 9;
	int	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	first = 0;
	int	last = size - 1;
	
	while(first < size / 2)
	{
		ft_swap(&tab[first], &tab[last]);
		first++;
		last--;
	}
}

void	ft_swap(int *a, int *b)
{
	int	swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
