#include <unistd.h>

static void print_n_to_c(int n);
void print_n_to_c_v2(int n);

void print_n_to_c_v2(int n)
{
	print_n_to_c(n);
}

static void print_n_to_c(int n)
{
	// If the number is greater than 9, recursively call the function
	// to handle the tens, hundreds, etc. first.
	if (n > 9)
	{
		print_n_to_c(n / 10);
	}

	// Isolate the last single digit using modulo 10, convert to ASCII, and write it
    char c = (n % 10) + '0';
    write(1, &c, 1);
}
