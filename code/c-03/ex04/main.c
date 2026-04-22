#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *haystack = "TutorialsPoint";
	char *needle = "Point";
	char *empty = "";

	printf("Result 1 (Found): %s\n", ft_strstr(haystack, needle));
	printf("Result 2 (Not Found): %s\n", ft_strstr(haystack, "Google"));
	printf("Result 3 (Empty Needle): %s\n", ft_strstr(haystack, empty));
}
