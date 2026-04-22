int	ft_str_is_alpha(char *str);
int	is_alpha(char c);

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);

	while (*str)
	{
		if (!is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_alpha(char c)
{
	c |= 32;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
