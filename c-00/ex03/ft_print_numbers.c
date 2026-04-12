#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int n;
	
	n = 0;
	while (n < 10)
	{
		// convert digit to ascii character
		char c = n + '0';

		// write ascii character
		write(1, &c, 1);

		// increment
		n++;
	}
}
