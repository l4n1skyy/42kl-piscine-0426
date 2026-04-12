void print_n_to_c(int n);
void print_n_to_c_v2(int n);

int	main (void)
{
	int n = 0;
	while (n <= 10)
	{
		if (n % 2 == 0)
			print_n_to_c_v2(n);	
		n++;
	}
	return 0;
}
