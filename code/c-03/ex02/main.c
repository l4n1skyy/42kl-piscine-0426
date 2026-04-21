#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[32] = "Hello ";
    char src[] = "42";

    printf("before dest = %s, src = %s\n", dest, src);
    ft_strcat(dest, src);
    printf("after dest = %s\n", dest);
    return (0);
}
