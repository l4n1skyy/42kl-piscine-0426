void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
