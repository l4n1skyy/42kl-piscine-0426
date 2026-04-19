char	*ft_strcat(char *dest, char *src);
int	str_len(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len = str_len(dest);
	
	int	i = dest_len;
	int	j = 0;
	while (src[j])
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
