void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}

	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}

	ft_itoa_write(nb);
}

void	ft_itoa_write(int nb)
{
	if (nb > 9)
		ft_itoa_write(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c, 1);
}

// -2147483648, if try to make positive cannot cause INT_MAX = 2147483647
