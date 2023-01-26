int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_bad_char(char c)
{
	return (c == ' ' || c == '-' || c == '+' || (c >= 9 && c <= 13));
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_ok_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	if (!*base || is_bad_char(*base))
		return (0);
	while (i < j)
	{
		j = i + 1;
		while (base[j])
		{
			if (i == 0 && is_bad_char(base[j]))
				return (0);
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	basesize;
	int				nbminus;
	int				nb;

	nb = 0;
	nbminus = 0;
	basesize = is_ok_base(base);
	if (!basesize || basesize == 1)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			nbminus++;
		str++;
	}
	while (get_base_value(*str, base) != -1)
	{
		nb *= basesize;
		nb += get_base_value(*(str++), base);
	}
	if (nbminus % 2 != 0)
		return (-nb);
	return (nb);
}
