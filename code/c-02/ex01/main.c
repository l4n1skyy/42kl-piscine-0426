#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[10];
	char	*src = "hello";

	// Copy 5 bytes from "42" (which is only 2 chars + \0)
	ft_strncpy(dest, src, 5);

	// Print the result
	printf("Result: %s\n", dest);

	return (0);
}
