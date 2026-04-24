#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	// 1. Decimal Test (Expect: 42)
	write(1, "Decimal: ", 9);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n", 1);

	// 2. Binary Test (Expect: 101010)
	write(1, "Binary: ", 8);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	// 3. Hexadecimal Test (Expect: 2A)
	write(1, "Hex: ", 5);
	ft_putnbr_base(42, "0123456789ABCDEF");
	write(1, "\n", 1);

	// 4. Poneyvif Octal Test (Expect: opypy)
	write(1, "Poneyvif: ", 10);
	ft_putnbr_base(4356, "poneyvif");
	write(1, "\n", 1);

	// 5. INT_MIN Test (Expect: -2147483648)
	write(1, "INT_MIN: ", 9);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);

	return (0);
}
