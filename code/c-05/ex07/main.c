#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	res;
	res = ft_find_next_prime(14);
	printf("next prime: %d\n", res);
	return (0);
}
