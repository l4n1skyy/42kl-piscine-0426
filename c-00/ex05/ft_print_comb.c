#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int x = 'X';
	
	while (k <= '9')
	{
		if (i != k)
	       	{
			while (i <= '9' && i != k; i++)
			{
				while (j <= '9' && j != i; j++;)
				{
			
					write(1, &k, 1);
					write(1, &i, 1);
					write(1, &j, 1);
					write(1, "\n", 1);			
				
			}
		}
		i='0';
		k++;

	}

}
