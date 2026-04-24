/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:18 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:18 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	quicksort(int array[], int low, int high);
int		partition(int array[], int low, int high);
void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	quicksort(tab, 0, size - 1);
}

// Recurse <--- left and right --->
		// apply the algorithm on array
		// recurse left <-- smaller
		// recurse right bigger -->
void	quicksort(int array[], int low, int high)
{
	int		p_index;

	if (low < high)
	{
		p_index = partition(array, low, high);
		quicksort(array, low, p_index - 1);
		quicksort(array, p_index + 1, high);
	}
}

// pick a pivot and ensure all smaller elements are moved to left
	// pivot (rightmost element)
	// boundary pointer "the wall"
	// scanner, go through every index left to right
	// loop through every element till it reaches the pivot
		// value = smaller,
		//	put that value behind wall
		// value = bigger,
		//	wall stays and scanners moves till finds smaller,
		//	then swaps with wall +1 (first big value it met)
	// once done, move pivot 1 index after wall (the smaller values)
	// return pivot position
int	partition(int array[], int low, int high)
{
	int		p;
	int		i;
	int		j;

	p = array[high];
	i = (low - 1);
	j = low;
	while (j < high)
	{
		if (array[j] <= p)
		{
			i++;
			swap(&array[i], &array[j]);
		}
		j++;
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

// swap two values
void	swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		tab[5];
	int		i;

	tab[0] = 4;
	tab[1] = 1;
	tab[2] = 3;
	tab[3] = 5;
	tab[4] = 2;
	printf("before: ");
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		if (i < 4)
			printf(" ");
		i++;
		}
	printf("\n");
	ft_sort_int_tab(tab, 5);
	printf("after: ");
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		if (i < 4)
			printf(" ");
		i++;
		}
	printf("\n");
	return (0);
}
*/
