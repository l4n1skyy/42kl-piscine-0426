#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void) {
	int int_arr[] = {5, 3, 2, 4, 6};
	int size = sizeof(int_arr) / sizeof(int_arr[0]);

	for(int i=0;i<size;i++)
		printf("%d ", int_arr[i]);
	printf("\n");
	ft_sort_int_tab(int_arr, size);
	for(int i=0;i<size;i++)
		printf("%d ", int_arr[i]);
}

