int	ft_str_is_lowercase(char *s);
int	is_lower(char c);

int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (!is_lower(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

