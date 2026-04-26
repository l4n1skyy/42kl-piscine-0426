int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	i = 2;

	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
