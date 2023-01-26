int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	nbminus;
	int	nb;

	nb = 0;
	nbminus = 0;
	while ((*str >= 9 && *str <= 13) || *str <= ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			nbminus++;
		str++;
	}
	while (is_num(*str))
	{
		nb *= 10;
		nb += *(str++) - '0';
	}
	if (nbminus % 2 != 0)
		return (-nb);
	return (nb);
}
