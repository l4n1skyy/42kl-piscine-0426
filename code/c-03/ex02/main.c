#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	// dest MUST be large enough to hold the result
	char dest[50] = "42"; 
	char *src = " Kuala Lumpur";

	printf("Before: %s\n", dest);
	
	ft_strcat(dest, src);
	
	printf("After:  %s\n", dest);
	
	return (0);
}
