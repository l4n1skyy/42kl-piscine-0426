#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*original = "test";
	char	*copy;

	copy = ft_strdup(original);
	if (copy == NULL)
		return (1);
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", copy);
	free(copy);
	return (0);
}
