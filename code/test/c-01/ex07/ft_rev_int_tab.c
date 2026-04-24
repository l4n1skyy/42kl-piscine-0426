/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:18 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:18 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		end;
	int		temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int		tab[5];
	int		i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
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
	ft_rev_int_tab(tab, 5);
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
