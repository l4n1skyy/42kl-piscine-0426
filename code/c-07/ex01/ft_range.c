#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int size = max - min;

	if (size < 1)
		return (NULL);

	int *arr = malloc(sizeof(int) * size);
	
	if (!arr)
		return (NULL);

	int i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}

