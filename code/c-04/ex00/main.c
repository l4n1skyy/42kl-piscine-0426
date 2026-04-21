#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *s = "test";
	int res = ft_strlen(s);
	printf("%d", res);
}
