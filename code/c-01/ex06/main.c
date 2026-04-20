#include <stdio.h>

int	ft_strlen(char *str);

int	main(void) {
	char* str = "test";
	int len = ft_strlen(str);
	printf("%d", len);
}
