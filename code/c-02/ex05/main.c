#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    printf("uppercase(ABC) = %d\n", ft_str_is_uppercase("ABC"));
    printf("uppercase(ABc) = %d\n", ft_str_is_uppercase("ABc"));
    return (0);
}
