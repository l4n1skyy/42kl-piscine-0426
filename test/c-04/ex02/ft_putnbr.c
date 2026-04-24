/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:25:17 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:25:17 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	n_to_c(int n);
int		handle_sign(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = handle_sign(nb);
		n_to_c(nb);
	}
}

int	handle_sign(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (nb * -1);
	}
	return (nb);
}

void	n_to_c(int n)
{
	char	c;

	if (n > 9)
		n_to_c(n / 10);
	c = (n % 10) + '0';
	write (1, &c, 1);
}
/*
#include <stdio.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
}
*/
