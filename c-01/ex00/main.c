#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);


int	main(void)
{
	int n = 5;
	printf("initial: %d\n", n);
	
	ft_ft(&n);
	printf("changed: %d", n);

	return 0;
}
