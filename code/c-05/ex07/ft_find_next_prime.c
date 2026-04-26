int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i = 2;

	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	while (i < nb)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		else
			i++;
	}
	return (nb);
}
