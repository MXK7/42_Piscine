/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderouin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:43:13 by aderouin          #+#    #+#             */
/*   Updated: 2023/02/05 17:36:16 by aderouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft.h"

void	ft_putline(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

int	ft_strlenssss(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c])
	{
		if ((unsigned long int)c + 1 > UINT_MAX)
			return (0);
		c++;
	}
	return (c);
}

int	atoi(char *str)
{
	unsigned int	strlen;
	unsigned int	c;
	unsigned int	nb;

	nb = 0;
	c = 1;
	strlen = ft_strlenssss(str);
	if (!strlen)
		return (-1);
	while (strlen--)
	{
		if (!(str[strlen] >= '0' && str[strlen] <= '9'))
			return (-2);
		if ((nb + ((str[strlen] - '0') * c)) > INT_MAX)
			return (-3);
		nb += (str[strlen] - '0') * c;
		c *= 10;
	}
	return (nb);
}

int	atoi_error(int nb)
{
	if (nb == -1)
		ft_putline("Error");
	if (nb == -2)
		ft_putline("Error");
	if (nb == -3)
		ft_putline("Error");
	return (nb < 0);
}

int	main(int argc, char **argv)
{
	int	x;

	if (argc < 2)
	{
		ft_putline("Program should be used with the following command:");
		ft_putline("./a.out <positive numeric numbers>");
		return (1);
	}
	x = atoi(argv[1]);
	if (atoi_error(x))
		return (1);
	ft_translate(x);
}
