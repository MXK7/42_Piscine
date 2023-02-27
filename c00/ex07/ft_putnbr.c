/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:27:22 by mpoussie          #+#    #+#             */
/*   Updated: 2023/02/08 17:27:23 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
