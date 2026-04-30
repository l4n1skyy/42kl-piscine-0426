#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main(void)
{
	int min = 5, max = 10;
	int *arr = ft_range(min, max);

	if (!arr)
		return (printf("Error or min >= max\n"), 1);

	for (int i = 0; i < (max - min); i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	return (0);
}
