#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *s = '\0';
	int res = ft_str_is_numeric(s);
	printf("%d", res);
}
