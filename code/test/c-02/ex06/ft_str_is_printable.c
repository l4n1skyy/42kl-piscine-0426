/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str);
int		is_printable(char c);

int	ft_str_is_printable(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_printable(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int		ft_str_is_printable(char *str);

int	main(void)
{
	printf("printable(abc) = %d\n", ft_str_is_printable("abc"));
	printf("printable(a\\tb) = %d\n", ft_str_is_printable("a\tb"));
	return (0);
}
*/
