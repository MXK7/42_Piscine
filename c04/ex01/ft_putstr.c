#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	strlen;

	strlen = 0;
	while (str[strlen])
		strlen++;
	write(1, str, strlen);
}
