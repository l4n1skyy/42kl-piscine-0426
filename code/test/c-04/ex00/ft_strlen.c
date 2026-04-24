/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:02:54 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:02:54 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int		counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter + 1);
}
/*
#include <stdio.h>

int		ft_strlen(char *str);

int	main(void)
{
	char *s = "test";
	int		res;
	res = ft_strlen(s);
	printf("%d", res);
}
*/
