#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // Output: Negative value
	printf("%d\n", ft_strncmp("abc", "abc", 3)); // Output: 0
	printf("%d\n", ft_strncmp("abc", "abd", 2)); // Output: 0 (diff is at index 2)
    return (0);
}
