#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 5;
	int b = 6;

	printf("a: %d, b: %d", a, b);
	ft_swap(&a, &b);
	printf("a: %d, b: %d", a, b);
}
