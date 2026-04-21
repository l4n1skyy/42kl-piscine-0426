#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    printf("alpha(abcXYZ) = %d\n", ft_str_is_alpha("abcXYZ"));
    printf("alpha(abc1) = %d\n", ft_str_is_alpha("abc1"));
    return (0);
}
