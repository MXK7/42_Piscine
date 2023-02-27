/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:18:17 by mpoussie          #+#    #+#             */
/*   Updated: 2023/01/28 16:49:52 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)(str));
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
		j = 0;
	}
	return (0);
}
