/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:40:32 by mpoussie          #+#    #+#             */
/*   Updated: 2023/01/31 17:40:33 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*table;

	i = 0;
	table = (int *)malloc((max - min) * sizeof(int));
	if (!table)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		table[i] = min + i;
		i++;
	}
	return (table);
}
