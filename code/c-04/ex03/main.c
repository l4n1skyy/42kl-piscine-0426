#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	// Test cases: {Input String, Expected Result}
	printf("Output: %d | Expected: -1234\n", ft_atoi("   ---+--1234ab56"), -1234);
	printf("Output: %d | Expected: -42\n", ft_atoi(" \n \t \r  -42"), -42);
	printf("Output: %d | Expected: 0\n", ft_atoi("  -- -123"), 0);
	printf("Output: %d | Expected: 0\n", ft_atoi("a123"), 0);
	printf("Output: %d | Expected: 2147483647\n", ft_atoi("2147483647"), 2147483647);

	return (0);
}
