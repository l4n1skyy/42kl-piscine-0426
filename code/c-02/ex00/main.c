#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src = "test";
	char dest[50];
	
	ft_strcpy(dest, src);

	printf("src: %s, dest: %s", src, dest);
}
