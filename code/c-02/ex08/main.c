#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char str[] = "AbC1";

    printf("before: %s\n", str);
    ft_strlowcase(str);
    printf("after: %s\n", str);
    return (0);
}
