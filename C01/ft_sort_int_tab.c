#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	tab[] = {9,8,7,6,5,4,3,2,1};
	int	size = 9;
	int	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	a = 0;
	while (a < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		a++;
	}	
}

void	ft_swap(int *a, int *b)
{
	int	swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
