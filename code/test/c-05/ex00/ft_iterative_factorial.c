/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:01:57 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:01:57 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int		total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
/*
#include <stdio.h>

int		ft_iterative_factorial(int nb);

int	main(void)
{
	int		n;

	n = ft_iterative_factorial(2);
	printf("%d", n);
}
*/
