void ft_sort_int_tab(int *tab, int size)
{
	ft_master_sort(tab, 0, size - 1);
}

void ft_master_sort(int *arr, int start, int end)
{
	if (start >= end)
		return;
	int pivot = ft_sort(arr, start, end);
	ft_master_sort(arr, start, pivot - 1);
	ft_master_sort(arr, pivot + 1, end);
}

int ft_sort(int *arr, int start, int end)
{
	int	wall = start - 1;
	int pivot = end;
	int scanner = start;

	while (scanner < pivot)
	{
		if (arr[scanner] < arr[pivot])
		{
			wall++;
			ft_swap(&arr[wall], &arr[scanner]);
		}
		scanner++;
	}
	ft_swap(&arr[wall + 1], &arr[pivot]);
	return (wall + 1);
}

void ft_swap(int *n1, int *n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
