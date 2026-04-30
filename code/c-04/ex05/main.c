#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("Base: 0123456789 | String: 42 | Output: %d\n", 
		ft_atoi_base("42", "0123456789"));
	
	printf("Base: 01123      | String: 10 | Output: %d\n", 
		ft_atoi_base("10", "01123"));
	
	printf("Base: 012+       | String: 10 | Output: %d\n", 
		ft_atoi_base("10", "012+"));
	
	return (0);
}
