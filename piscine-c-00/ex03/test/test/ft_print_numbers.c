#include <unistd.h>

void	ft_print_numbers(void)
{
	int number;
	char ascii_number;
	
	number = 0;
	while (number <= 9)
	{
		ascii_number = number + '0';
		write(1, &ascii_number, 1);
		number++;
	}
}
