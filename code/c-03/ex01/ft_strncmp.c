int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)*s1 - (unsigned char)*s2);
		i++;
	}
	if (*s2 != '\0')
		return ('\0' - (unsigned char)*s2);
	return (0);
}
