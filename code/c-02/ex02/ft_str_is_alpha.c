int	ft_str_is_alpha(char *str);
int	is_alpha(char c);

// loop through every character and check if alphabet
// if yes, return 0
// if not, return 1
// also checks if pointer has address
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

// convert to lowercase with bitwise or operator
// return 1 if is alphabet, return 0 if not
int	is_alpha(char c)
{
	c |= 32;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
