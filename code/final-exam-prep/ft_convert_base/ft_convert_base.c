char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	// validate input
	int base_from_size = ft_validate_base(base_from);
	int base_to_size = ft_validate_base(base_to);

	if (!base_from_size || ! base_to_size)
		return (NULL);

	int sign = 1;
	nbr = ft_validate_nbr(&sign, nbr, base_from);

	// convert
	int nbr_base_ten = ft_base_to_ten(nbr, base_from, base_from_size);
	
	int base_to_len = ft_base_to_len(nbr_base_ten, base_to_size) + 1 + (1 - sign) / 2;
	char *nbr_base_to = malloc(base_to_len);
	ft_ten_to_base(nbr_base_ten, base_to, base_to_size, nbr_base_to, base_to_len);
	if (sign < 0)
		*nbr_base_to = '-';

	return (nbr_base_to);
}

void	ft_ten_to_base(int nbr, char *base, int base_size, char *res, int len)
{
	len--;

	if (nbr == 0)
	{
		res[0] = base[0];
		res[1] = '\0';
		return;
	}

	// add terminator
	res[len] = '\0';
	len--;

	while (nbr > 0)
	{
		res[len] = base[nbr % base_size];
		nbr /= base_size;
		len--;
	}
}

// handle int min???
int ft_base_to_len(int nbr_base_ten, int base_size)
{
	if (nbr_base_ten == 0)
		return (1);
	int digits = 0;
	while (nbr_base_ten > 0)
	{
		nbr_base_ten /= base_size;
		digits++;
	}
	return (digits);
}

int ft_base_to_ten(char *nbr, char *base, int base_size)
{
	int total = 0;
	int i = 0;
	while (nbr[i])
	{
		int index = ft_strchr(nbr[i], base);
		total = (total * base_size) + index;
		i++;
	}
	return (total);
}

// modified atoi, check first part, convert nbr, ignore rest of str
char *ft_validate_nbr(int *sign, char *nbr, char *base)
{
	char *read = nbr;

	// while whitespace
	while (*read == 32 || *read >= 9 && *read <= 13)
		read++;
	// while sign
	while (*read == '+' || *read == '-')
	{
		if (*read == '-')
			*sign *= -1;
		read++;
	}

	// while nbr
	nbr = read;
	while (*read && ft_strchr(*read, base) >= 0)
		read++;

	// cut off excess stuff that isnt nbr
	*read = '\0';

	return (nbr);
}

int ft_strchr(char c, char *str)
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

int ft_validate_base(char *base)
{
	int i = 0;
	int j = 0;
	while (base[i])
	{
		// if sign
		if (base[i] == '+' || base[i] == '-')
			return (0);
		
		// if whitespace
		if (base[i] == 32 || base[i] >= 9 && base[i] <= 13)
			return (0);
		
		// if duplicate
		j = i + 1;
		while (base[j] && base[i] != base[j])
			j++;
		if (base[j])
			return (0);
		
		i++;
	}

	// if base < 2
	if (i < 2)
		return (0);
	
	// all good, return base size
	return (i);
}

int ft_strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return (len);
}
