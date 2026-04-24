#include <stdio.h>

int	ft_atoi(char *str);
int	is_whitespace(char c);
int	is_digit(char c);
int	is_sign(char c);

int	ft_atoi(char *str)
{
	int sign = 1;
	int i = 0;
	int result = 0;

	while (is_whitespace(str[i]))
		i++;
	while (is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
		return (1);
	else
		return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}
