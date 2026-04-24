/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:25:17 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:25:17 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);
int		is_whitespace(char c);
int		is_digit(char c);
int		is_sign(char c);

int	ft_atoi(char *str)
{
	int		sign;
	int		i;
	int		result;

	sign = 1;
	i = 0;
	result = 0;
	while (is_whitespace(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int		ft_atoi(char *str);

int	main(void)
{
	printf("Output: %d | Expected: -1234\n", ft_atoi("   ---+--1234ab56"), -1234);
	printf("Output: %d | Expected: -42\n", ft_atoi(" \n \t \r  -42"), -42);
	printf("Output: %d | Expected: 0\n", ft_atoi("  -- -123"), 0);
	printf("Output: %d | Expected: 0\n", ft_atoi("a123"), 0);
	printf("Output: %d | Expected: 2147483647\n", ft_atoi("2147483647"), 2147483647);
	return (0);
}
*/
