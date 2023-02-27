/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:54:10 by mpoussie          #+#    #+#             */
/*   Updated: 2023/02/06 14:54:12 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print(unsigned int a, long int b)
{
	int	n;
	int	z;

	while (b >= 10)
	{
		if (b == 1)
		{
			n = n % 10;
		}
		else
		{
			n = a % b / (b / 10);
		}
		z = n + '0';
		write(1, &z, 1);
		b = b / 10;
	}	
}

void	ft_putnbr(int nb)
{
	unsigned int	u;
	long int		i;
	long int		j;
	int				cible;

	if (nb < 0)
	{
		write(1, "-", 1);
		u = -nb;
	}
	else
	{
		u = nb;
	}
	i = 1;
	cible = 1;
	while (cible > 0)
	{
		i = i * 10;
		j++;
		cible = u / i;
	}
	print(u, i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
