int	ft_str_is_printable(char *str);
int	is_printable(char c);

// printable chars, str empty -> return 1
// other -> 0
int	ft_str_is_printable(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
