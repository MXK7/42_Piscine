/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 23:57:22 by mpoussie          #+#    #+#             */
/*   Updated: 2023/01/30 23:57:30 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

int	ft_correct(char *tab, int pos)
{
	int	i;
	int	j;

	i = 0;
	j = 0 ;
	while (i < pos)
	{
		j = i + 1;
		while (j < pos)
		{
			if (tab[i] == tab[j])
			{
				return (0);
			}
			else if (abs(tab[i] - tab[j]) == abs(i - j))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_sol(char *tab, int *count)
{
	if (ft_correct(tab, 10))
	{
		while (*tab)
		{
			write(1, tab++, 1);
		}
		write(1, "\n", 1);
		(*count)++;
	}
}

void	ft_solve(char *tab, int n, int *count)
{
	if (n == 10)
	{
		ft_print_sol(tab, count);
		return ;
	}
	tab[n] = '0';
	while (tab[n] <= '9')
	{
		if (ft_correct(tab, n))
		{	
			ft_solve(tab, n + 1, count);
		}
		tab[n]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char		tab[10];
	int			count;

	count = 0;
	ft_solve(tab, 0, &count);
	return (count);
}
