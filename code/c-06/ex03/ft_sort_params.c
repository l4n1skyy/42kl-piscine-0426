#include <unistd.h>

void	master_sort(char **arr, int start, int end);
int		sort(char **arr, int start, int end);
void	swap_str(char **s1, char **s2);
void	print_params(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	argv++;
	argc--;
	master_sort(argv, 0, argc - 1);
	print_params(argc, argv);
	return (0);
}

void	master_sort(char **arr, int start, int end)
{
	int	pivot;

	// Base Case
	if (start >= end)
		return ;

	pivot = sort(arr, start, end);

	// Recursively sort the left and right halves
	master_sort(arr, start, pivot - 1);
	master_sort(arr, pivot + 1, end);
}

int	sort(char **arr, int start, int end)
{
	int	scanner = start;
	int	wall = start - 1;
	int	pivot = end;

	while (scanner < pivot)
	{
		if (ft_strcmp(arr[scanner], arr[pivot]) < 0)
		{
			wall++;
			if (scanner != wall)
				swap_str(&arr[scanner], &arr[wall]); // Swap pointers
		}
		scanner++;
	}
	swap_str(&arr[pivot], &arr[wall + 1]);
	return (wall + 1);
}

// Swap two string pointers in memory
void	swap_str(char **s1, char **s2)
{
	char	*temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

// Compare two strings alphabetically
int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// Print the arguments directly from the array
void	print_params(int argc, char *argv[])
{
	int	i = 0;
	int	j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
