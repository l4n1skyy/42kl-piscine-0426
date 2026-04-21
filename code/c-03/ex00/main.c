#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    printf("cmp(abc, abc) = %d\n", ft_strcmp("abc", "abc"));
    printf("cmp(abc, abd) = %d\n", ft_strcmp("abc", "abd"));
    printf("cmp(abe, abd) = %d\n", ft_strcmp("abe", "abd"));
    return (0);
}
