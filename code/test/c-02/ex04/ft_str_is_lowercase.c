/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *s);
int		is_lower(char c);

int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (!is_lower(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("lowercase(abc) = %d\n", ft_str_is_lowercase("abc"));
	printf("lowercase(abC) = %d\n", ft_str_is_lowercase("abC"));
	return (0);
}
*/
