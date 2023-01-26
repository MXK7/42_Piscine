#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_rec(unsigned int nb, char *base, unsigned int basesize)
{
	if (nb == 0)
		return ;
	ft_putnbr_rec(nb / basesize, base, basesize);
	ft_putchar(base[nb % basesize]);
}

int	is_ok_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	if (!*base || *base == '+' || *base == '-')
		return (0);
	while (i < j)
	{
		j = i + 1;
		while (base[j])
		{
			if (i == 0 && (base[j] == '+' || base[j] == '-'))
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (j);
}

void	ft_putnbr_base(int nb, char *base)
{
	unsigned int	unb;
	unsigned int	basesize;

	basesize = is_ok_base(base);
	if (!basesize || basesize == 1)
		return ;
	if (nb == 0)
		return (ft_putchar(base[0]));
	if (nb < 0)
	{
		ft_putchar('-');
		unb = (unsigned int)(-nb);
	}
	else
		unb = (unsigned int)nb;
	ft_putnbr_rec(unb, base, basesize);
}
