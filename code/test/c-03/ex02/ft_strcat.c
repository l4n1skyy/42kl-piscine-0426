/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:44 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:44 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);
int		str_len(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int		dest_len;
	int		i;
	int		j;

	dest_len = str_len(dest);
	i = dest_len;
	j = 0;
	while (src[j])
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

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[32] = "Hello ";
	char src[] = "42";
	printf("before dest = %s, src = %s\n", dest, src);
	ft_strcat(dest, src);
	printf("after dest = %s\n", dest);
	return (0);
}
*/
