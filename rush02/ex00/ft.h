/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderouin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:51:41 by aderouin          #+#    #+#             */
/*   Updated: 2023/02/05 14:52:53 by aderouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int			ft_strlen(char *str);
int			ft_strcmp(char *s1, char *s2);
void		read_file(void);
void		ft_rev_int_tab(int *tab, int size);
void		ft_putchar(char c);
void		ft_translate(int x);
void		ft_putstr(char *str);

char		*ft_strdup(char *src);
char		**ft_split(char *str, char *charset);

#endif
