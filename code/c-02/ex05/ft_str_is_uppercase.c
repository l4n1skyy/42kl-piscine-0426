int	ft_str_is_uppercase(char *str);
int	is_upper(char c);

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_upper(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
