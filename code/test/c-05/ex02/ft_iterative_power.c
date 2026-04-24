/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:01:57 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:01:57 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int		total;

	total = 1;
	if (power < 0)
		return (0);
	while (power--)
		total *= nb;
	return (total);
}
/*
#include<stdio.h>

int		ft_iterative_power(int nb, int power);

int	main()
{
	int		res;

	res = ft_iterative_power(5, 5);
	printf("%d", res);
}
*/
