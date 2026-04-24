/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:51:44 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 17:51:44 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *haystack = "TutorialsPoint";
	char *needle = "Point";
	char *empty = "";
	printf("Result 1 (Found): %s\n", ft_strstr(haystack, needle));
	printf("Result 2 (Not Found): %s\n", ft_strstr(haystack, "Google"));
	printf("Result 3 (Empty Needle): %s\n", ft_strstr(haystack, empty));
}
*/
