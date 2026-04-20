#include <stdio.h>

int	ft_str_is_lowercase(char *s);

int	main(void)
{
	char *s = "laksdjf";
	char *s1 = "lskjA";
	char *s2 = "";
	char *s3 = "\0";

	printf("s: %s	res: %d\n", s, ft_str_is_lowercase(s));
	printf("s: %s	res: %d\n", s1, ft_str_is_lowercase(s1));
	printf("s: %s	res: %d\n", s2, ft_str_is_lowercase(s2));
	printf("s: %s	res: %d\n", s3, ft_str_is_lowercase(s3));
}
