unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *read = src;
	char *write = dest;
	unsigned int src_len = 0;
	
	while (*read++)
		src_len++;

	if (size == 0)
		return (src_len);
	
	read = src;
	while (*read && write - dest < size - 1)
		*write++ = *read++;
	*write = '\0';
	
	return (src_len);
}
