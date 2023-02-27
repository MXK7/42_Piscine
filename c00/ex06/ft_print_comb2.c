/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:27:00 by mpoussie          #+#    #+#             */
/*   Updated: 2023/02/08 17:27:01 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	j = 1;
	while (i < 99)
	{
		ft_putchar(i / 10 + '0');
		ft_putchar(i % 10 + '0');
		ft_putchar(' ');
		ft_putchar(j / 10 + '0');
		ft_putchar(j % 10 + '0');
		if (i < 98)
			write(1, ", ", 2);
		if (++j > 99)
			j = ++i + 1;
	}
}
