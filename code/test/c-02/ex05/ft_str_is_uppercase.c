/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str);
int		is_upper(char c);

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_upper(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("uppercase(ABC) = %d\n", ft_str_is_uppercase("ABC"));
	printf("uppercase(ABc) = %d\n", ft_str_is_uppercase("ABc"));
	return (0);
}
*/
