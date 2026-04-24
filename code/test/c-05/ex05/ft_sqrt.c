/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:01:57 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:01:57 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int		n;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n * n < nb && n <= 46340)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}
/*
#include <stdio.h>

int		ft_sqrt(int nb);

int	main(void)
{
	int		res;

	res = ft_sqrt(25);
	printf("%d", res);
}
*/
