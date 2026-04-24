/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:44 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:44 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		str_len(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = str_len(dest);
	i = dest_len;
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_len(char *str)
{
	int		counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[32] = "Hello ";
	char src[] = "42Piscine";
	unsigned int	nb;
	nb = 2;
	printf("before dest = %s, src = %s, nb = %u\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("after dest = %s\n", dest);
	return (0);
}
*/
