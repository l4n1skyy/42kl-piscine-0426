/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);
int		is_alpha(char c);

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_alpha(*str))
			return (0);
		str++;
	}
	return (1);
}

int	is_alpha(char c)
{
	c |= 32;
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int		ft_str_is_alpha(char *str);

int	main(void)
{
	printf("alpha(abcXYZ) = %d\n", ft_str_is_alpha("abcXYZ"));
	printf("alpha(abc1) = %d\n", ft_str_is_alpha("abc1"));
	return (0);
}
*/
