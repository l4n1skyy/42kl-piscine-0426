#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    printf("numeric(012345) = %d\n", ft_str_is_numeric("012345"));
    printf("numeric(42a) = %d\n", ft_str_is_numeric("42a"));
    return (0);
}
