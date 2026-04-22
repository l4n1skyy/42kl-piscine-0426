unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	str_n_len(char *str, unsigned int size);
unsigned int	str_len(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;


	dest_len = str_n_len(dest, size);
	src_len = str_len(src);
	i = dest_len;
	j = 0;

	if (size <= dest_len)
		return (size + src_len);

	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}

unsigned int	str_n_len(char *str, unsigned int size)
{
	unsigned int	counter;
	
	counter = 0;
	while (*str && counter < size)
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	str_len(char *str)
{
	unsigned int	counter;
	
	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
