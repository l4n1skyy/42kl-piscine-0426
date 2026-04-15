void	ft_sort_int_tab(int *tab, int size);
void	quicksort(int array[], int low, int high);
int	partition(int array[], int low, int high);
void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	quicksort(tab, 0, size-1);
}

// Recurse <--- left and right --->
void	quicksort(int array[], int low, int high) {
	if (low < high) {

		// apply the algorithm on array
		int p_index = partition(array, low, high);

		// recurse left <-- smaller
		quicksort(array, low, p_index - 1);

		// recurse right bigger -->
		quicksort(array, p_index + 1, high);
	}
}

// pick a pivot and ensure all smaller elements are moved to left
int	partition(int array[], int low, int high)
{
	int	p;
	int	i;
	int	j;

	// pivot (rightmost element)
	p = array[high];

	// boundary pointer "the wall"
	i = (low - 1);

	// scanner, go through every index left to right
	j = low;

	// loop through every element till it reaches the pivot
	while(j < high)
	{
		// value = smaller,
		//	put that value behind wall
		// value = bigger, 
		//	wall stays and scanners moves till finds smaller,
		//	then swaps with wall +1 (first big value it met)
		if (array[j] <= p) {
			i++;
			swap(&array[i], &array[j]);
		}
		j++;
	}

	// once done, move pivot 1 index after wall (the smaller values)
	swap(&array[i + 1], &array[high]);
	
	// return pivot position
	return (i + 1);
}

// swap two values
void	swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
