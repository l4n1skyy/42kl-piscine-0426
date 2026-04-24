/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:33 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:33 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);
int		is_alpha(char c);

char	*ft_strupcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str)
	{
		if (is_alpha(*str))
			*str &= ~32;
		str++;
	}
	return (str_ptr);
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

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "abC1";
	printf("before: %s\n", str);
	ft_strupcase(str);
	printf("after: %s\n", str);
	return (0);
}
*/
