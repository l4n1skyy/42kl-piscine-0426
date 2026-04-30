int	ft_atoi_base(char *str, char *base);
int	validate_base(char *base);
int	char_substr(char *str, char c);

int	ft_atoi_base(char *str, char *base)
{
	int base_size = validate_base(base);
	if (!base_size)
		return (0);

	int sign = 1;
	char *read = str;
	int index;
	int total = 0;

	while ((*read >= 9 &&  *read <= 13) || (*read == 32))
		read++;
	while (*read == '-' || *read == '+')
	{
		if (*read == '-')
			sign *= -1;
		read++;
	}
	while (*read && (index = char_substr(base, *read)) >= 0)
	{
		total = total * base_size + index; // horner's method
		read++;
	}
	total *= sign;
	return (total);
}

int	validate_base(char *base)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = 0;
	while (base[i])
	{
		// check for sign
		if (base[i] == '+' || base[i] == '-')
			return (0);

		// check for whitespace
		else if (base[i] <= 32 || base[i] == 127)
			return (0);

		// check for duplicate, no need to recheck previous ones
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		length++;
		i++;
	}

	// check min base size
	if (length < 2)
		return (0);

	return (length);
}

int	char_substr(char *str, char c)
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}
