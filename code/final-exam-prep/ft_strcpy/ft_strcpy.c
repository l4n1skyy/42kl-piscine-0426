char *ft_strcpy(char *dest, char *src)
{
	char *cpy = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return(cpy);
}

// check prev, assign, increment next.
// it check PREV and assign NEXT, before checking next
