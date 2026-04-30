unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len = ft_strlen(dest);
	unsigned int src_len = ft_strlen(src);
	char *read = src;
	char *write = dest + dest_len;

	if (size <= dest_len)
		return (src_len + size);

	while (*read && write - dest < size - 1)
		*write++ = *read++;
	
	*write = '\0';
	return (src_len + dest_len);
}

int ft_strlen(char *str)
{
	int len = 0;
	while (*str++)
		len++;
	return (len);
}
