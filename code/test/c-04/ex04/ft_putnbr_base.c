/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lanusri- <lanusri-@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:02:54 by lanusri-          #+#    #+#             */
/*   Updated: 2026/04/24 18:02:54 by lanusri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		calculate(long n, int base_len, char *base_str);
int		get_base_len(char *base_str);
int		validate_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	nb;

	base_len = get_base_len(base);
	if (!validate_base(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb == 0)
		write(1, &base[0], 1);
	calculate(nb, base_len, base);
}

int	calculate(long n, int base_len, char *base_str)
{
	char	res;

	if (n == 0)
		return (0);
	else
	{
		calculate(n / base_len, base_len, base_str);
		res = base_str[n % base_len];
		write(1, &res, 1);
		return (0);
	}
}

int	get_base_len(char *base_str)
{
	int		i;

	i = 0;
	while (base_str[i])
		i++;
	return (i);
}

		// check for sign
		// check for whitespace
		// check for duplicate, no need to recheck previous ones
	// check min base size
int	validate_base(char *base)
{
	int		i;
	int		j;
	int		length;

	i = 0;
	j = 0;
	length = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		length++;
		i++;
	}
	if (length < 2)
		return (0);
	return (1);
}
/*
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	write(1, "Decimal: ", 9);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);
	write(1, "Binary: ", 8);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);
	write(1, "Hex: ", 5);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);
	write(1, "Poneyvif: ", 10);
	ft_putnbr_base(4356, "poneyvif");
	write(1, "\n", 1);
	write(1, "INT_MIN: ", 9);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	return (0);
}
*/
