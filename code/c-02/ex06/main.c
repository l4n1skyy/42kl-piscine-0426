#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    printf("printable(abc) = %d\n", ft_str_is_printable("abc"));
    printf("printable(a\\tb) = %d\n", ft_str_is_printable("a\tb"));
    return (0);
}
