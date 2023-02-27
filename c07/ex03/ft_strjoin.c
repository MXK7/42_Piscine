/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:43:16 by mpoussie          #+#    #+#             */
/*   Updated: 2023/02/01 17:49:48 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	total;

	total = 0;
	while (str[total])
		total++;
	return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_emptystr(void)
{
	char	*emptystr;

	emptystr = malloc (sizeof(char));
	*emptystr = '\0';
	return (emptystr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		n;

	if (size == 0)
		return (ft_emptystr());
	i = 0;
	n = 0;
	while (i < size)
	{
		n += ft_strlen(strs[i]);
		i++;
	}
	n += (size - 1) * ft_strlen(sep);
	res = malloc((n + 1) * sizeof(char));
	*res = '\0';
	ft_strcat(res, *strs);
	i = 1;
	while (i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
