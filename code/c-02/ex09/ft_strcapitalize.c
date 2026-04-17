char	*ft_strcapitalize(char *str);
char	c_to_low(char c);
char	c_to_up(char c);
int	is_alphanumeric(char c);
int	is_alpha(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (i != 0 && is_alphanumeric(str[i - 1]))
			str[i] = c_to_low(str[i]);
		else
			str[i] = c_to_up(str[i]);
		i++;
	}
	return (str);
}

char	c_to_low(char c)
{	
	if (is_alpha(c))
		c |= 32;
	return (c);
}

char	c_to_up(char c)
{	
	if (is_alpha(c))
		c &= ~32;
	return (c);
}

int	is_alphanumeric(char c)
{
	if (is_alpha(c) || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	is_alpha(char c)
{
	c |= 32;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
