/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:18 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:18 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int		buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int		a;
	int		b;

	a = 1;
	b = 2;
	printf("before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d, b = %d\n", a, b);
	return (0);
}
*/
