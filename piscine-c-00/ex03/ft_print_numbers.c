#include <unistd.h>

void	ft_print_numbers(void)
{
	int number;
	
	int number_1;
	int number_2;
	
	char ascii_number_1;
	char ascii_number_2;
	
	number = 0;
	while (number <= 23)
	{
		number_2 = (number % 10);
		number_1 = number - number_2 ;
		
		ascii_number_1 = number_1 + '0';
		ascii_number_2 = number_2 + '0';

		write(1, &ascii_number_1, 1);
		write(1, &ascii_number_2, 1);
		write(1, "\n", 1);
		number++;
	}
}
