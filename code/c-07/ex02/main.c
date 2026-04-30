#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *arr = NULL;
	int size;

	size = ft_ultimate_range(&arr, 5, 10);
	printf("Size: %d\n", size);
	
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
			printf("%d ", arr[i]);
		printf("\n");
		free(arr);
	}
	return (0);
}
