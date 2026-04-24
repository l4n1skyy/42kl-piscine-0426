/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:18 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:18 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 8;
	b = 3;
	printf("input: a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("output: div = %d, mod = %d\n", div, mod);
	return (0);
}
*/
