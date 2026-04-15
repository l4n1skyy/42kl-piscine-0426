/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilyip <wilyip@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 21:45:35 by wilyip            #+#    #+#             */
/*   Updated: 2026/04/12 14:04:40 by wilyip           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*x_y is Column (y-axis)
  y_x is Row (x-axis)*/

void	ft_putchar(char c);

void	print_rush(int x, int y, int x_y, int y_x)
{
	if ((x_y == 1 && y_x == 1) || (x_y == x && y_x == 1))
		ft_putchar('o');
	else if ((x_y == 1 && y_x == y) || (x_y == x && y_x == y))
		ft_putchar('o');
	else if (y_x == 1 || y_x == y)
		ft_putchar('-');
	else if (x_y == 1 || x_y == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	x_y;
	int	y_x;

	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR!", 6);
		return ;
	}
	y_x = 1;
	while (y_x <= y)
	{
		x_y = 1;
		while (x_y <= x)
		{
			print_rush(x, y, x_y, y_x);
			x_y++;
		}
		ft_putchar('\n');
		y_x++;
	}
}
