/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:14:51 by mpoussie          #+#    #+#             */
/*   Updated: 2023/02/07 19:14:53 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sep_finder(char c, char *sep_list)
{
	int	i;

	i = 0;
	while (sep_list[i])
		if (c == sep_list[i++])
			return (1);
	return (0);
}

char	*get_next_word(int *index, char *str, char *charset)
{
	int		len;
	char	*res;
	int		i;

	i = 0;
	len = 0;
	while (sep_finder(str[*index], charset))
		(*index)++;
	while (!sep_finder(str[*index + len], charset) && str[*index + len])
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i++] = str[*index];
		(*index)++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		ac;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ac = len_sep_string(str, charset);
	res = malloc(ac * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < ac - 1)
		res[i++] = get_next_word(&j, str, charset);
	res[i] = 0;
	return (res);
}
