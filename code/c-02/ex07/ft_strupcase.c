char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*str_ptr;
	
	if (!str)
		return (NULL);
	str_ptr = str;
	while (*str)
	{
		if (is_alpha(*str))
			*str &= ~32;
		str++;
	}
	return (str_ptr);
}

int	is_alpha(char c)
{
	c |= 32;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
