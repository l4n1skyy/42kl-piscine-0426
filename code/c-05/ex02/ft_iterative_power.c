int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	total = 1;
	if (power < 0)
		return (0);
	while (power--)
		total *= nb;
	return (total);
}
