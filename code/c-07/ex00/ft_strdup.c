#include <stdlib.h>

char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	if (!src)
		return (NULL);
	
	// get string length
	int len = ft_strlen(src);

	char *dest = malloc(sizeof(char) * (len + 1));

	if (!dest)
		return (NULL);

	ft_strcpy(dest, src);

	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return len;
}
