#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char *src = "hi";
	char dest[40] = "";

	ft_strncat(dest, src, 1);
	printf("%s\n", dest);
}
