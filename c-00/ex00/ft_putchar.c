#include <unistd.h>

// function prototype
void ft_putchar(char c);

void	ft_putchar(char c)
{
	// ssize_t write(int fd, const void *buf, size_t count);
	write(1, &c, 1);
}
