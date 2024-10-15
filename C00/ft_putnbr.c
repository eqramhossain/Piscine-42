#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	ft_putnbr(9);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
//	ft_putchar(nb % 10 + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
