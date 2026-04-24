/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str);
int		is_digit(char c);

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_digit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int		ft_str_is_numeric(char *str);

int	main(void)
{
	printf("numeric(012345) = %d\n", ft_str_is_numeric("012345"));
	printf("numeric(42a) = %d\n", ft_str_is_numeric("42a"));
	return (0);
}
*/
