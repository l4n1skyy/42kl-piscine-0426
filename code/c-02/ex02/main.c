#include <stdio.h>

// Declare your functions so main knows they exist
int	ft_str_is_alpha(char *str);

int	main(void)
{
	// Test Case 1: Pure alphabet
	char *str1 = "HelloKL";
	// Test Case 2: Contains numbers
	char *str2 = "Hello42";
	// Test Case 3: Empty string (Should return 1)
	char *str3 = "";
	// Test Case 4: Special characters
	char *str4 = "Hello!";

	printf("--- Testing ft_str_is_alpha ---\n");

	printf("Test 1 (\"%s\"): %d (Expected: 1)\n", str1, ft_str_is_alpha(str1));
	printf("Test 2 (\"%s\"): %d (Expected: 0)\n", str2, ft_str_is_alpha(str2));
	printf("Test 3 (\"%s\"): %d (Expected: 1)\n", str3, ft_str_is_alpha(str3));
	printf("Test 4 (\"%s\"): %d (Expected: 0)\n", str4, ft_str_is_alpha(str4));

	return (0);
}
