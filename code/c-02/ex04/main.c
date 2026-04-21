#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    printf("lowercase(abc) = %d\n", ft_str_is_lowercase("abc"));
    printf("lowercase(abC) = %d\n", ft_str_is_lowercase("abC"));
    return (0);
}
