/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderouin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:45:17 by aderouin          #+#    #+#             */
/*   Updated: 2023/02/04 10:52:08 by aderouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_putstr(char *str);

int	ft_translate(int x)
{
	if (x == 0)
		return (ft_putstr("zero\n"));
	if (x == 42)
		return (ft_putstr("forty-two\n"));
	return (ft_putstr("Dict Error\n"));
}
