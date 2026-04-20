#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int int_arr[] = {1,2,3,4,5};
	int size = 5;
	
	for(int i=0;i<size;i++)printf("%d ",int_arr[i]);
	printf("\n");
	ft_rev_int_tab(int_arr, size);
	for(int i=0;i<size;i++)printf("%d ",int_arr[i]);
}
