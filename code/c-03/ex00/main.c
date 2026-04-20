#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "Hello";
	char *s3 = "Hellz";
	char *s4 = "Hell";

	printf("Testing ft_strcmp:\n");
	printf("------------------\n");

	// Test 1: Identical strings (Should return 0)
	printf("Same: %d\n", ft_strcmp(s1, s2));

	// Test 2: s1 is 'smaller' than s3 (Should return a negative number)
	printf("Less: %d\n", ft_strcmp(s1, s3));

	// Test 3: s1 is 'greater' than s4 (Should return a positive number)
	printf("More: %d\n", ft_strcmp(s1, s4));

	return (0);
}
