#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char str[] = "abC1";

    printf("before: %s\n", str);
    ft_strupcase(str);
    printf("after: %s\n", str);
    return (0);
}
