char	*ft_strncat(char *dest, char *src, unsigned int nb);
int	str_len(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = str_len(dest);
	i = dest_len;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_len(char *str)
{
	int	counter;
	
	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
