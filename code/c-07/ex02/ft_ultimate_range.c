#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int size = max - min;

	if (size < 1)
	{
		*range = NULL;
		return (0);
	}

	*range = malloc(sizeof(int) * size);
	
	if (!*range)
		return (-1);

	int i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}

	return (size);
}
