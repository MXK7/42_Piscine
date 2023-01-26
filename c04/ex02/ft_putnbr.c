#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_rec(unsigned int nb)
{
	if (nb == 0)
		return ;
	ft_putnbr_rec(nb / 10);
	ft_putchar('0' + (nb % 10));
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb == 0)
		return (ft_putchar('0'));
	if (nb < 0)
	{
		ft_putchar('-');
		unb = (unsigned int)(-nb);
	}
	else
		unb = (unsigned int)nb;
	ft_putnbr_rec(unb);
}
