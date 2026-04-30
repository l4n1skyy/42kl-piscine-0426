#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int	calculate(long n, int base_len, char *base_str);
int	get_base_len(char *base_str);
int	validate_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	long	nb;

	base_len = get_base_len(base);
	
	if (!validate_base(base))
		return;

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
	if (n == 0)
		return 0;
	else
	{
		calculate(n / base_len, base_len, base_str);
		char res = base_str[n % base_len];
		write(1, &res, 1);
		return 0;
	}
}

int	get_base_len(char *base_str)
{
	int	i;

	i = 0;
	while (base_str[i])
		i++;
	return i;
}

int	validate_base(char *base)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = 0;
	while (base[i])
	{
		// check for sign
		if (base[i] == '+' || base[i] == '-')
			return (0);

		// check for whitespace
		else if (base[i] <= 32 || base[i] == 127)
			return (0);

		// check for duplicate, no need to recheck previous ones
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

	// check min base size
	if (length < 2)
		return (0);

	return (1);
}
