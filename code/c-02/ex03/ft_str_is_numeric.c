int	ft_str_is_numeric(char *str);
int	is_digit(char c);

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_digit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
