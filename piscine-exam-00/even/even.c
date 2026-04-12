#include <unistd.h>

void print_n_to_c(int n);

void print_n_to_c(int n)
{
	if (n >= 10)
	{
		int n_first = n / 10;
		char n_first_ascii = n_first + '0';
		write (1, &n_first_ascii, 1);
	}
	
	int n_second = n % 10;
	char n_second_ascii = n_second + '0';
	write (1, &n_second_ascii, 1);
}
