/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:49:46 by mpoussie          #+#    #+#             */
/*   Updated: 2023/01/18 14:49:49 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int a, int b, int c)
{
	char	chr;

	chr = a + 48;
	write(1, &chr, 1);
	chr = b + 48;
	write(1, &chr, 1);
	chr = c + 48;
	write(1, &chr, 1);
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_display(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
