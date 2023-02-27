/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfauvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 12:51:56 by lfauvel           #+#    #+#             */
/*   Updated: 2023/02/05 18:09:47 by aderouin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#define BUF_SIZE 4096

void	ft_putstr(char *str);

void	read_file(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open("number.dict", O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	close(fd);
}
