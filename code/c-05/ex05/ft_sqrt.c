int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	n = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}
