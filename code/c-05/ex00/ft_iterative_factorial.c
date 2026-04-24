#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
