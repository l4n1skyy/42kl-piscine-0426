int ft_strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_strlen_3(char *str)
{
	char *p = str;
	while (*p)
		p++;
	return (p - str);
}

int ft_strlen_2(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}


