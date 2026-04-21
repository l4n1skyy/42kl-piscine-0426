#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char src[] = "42";
    char dest[32] = "xxxxx";
    unsigned int n;

    n = 4;
    printf("src = %s, n = %u\n", src, n);
    printf("before dest = %s\n", dest);
    ft_strncpy(dest, src, n);
    printf("after dest = %s\n", dest);
    return (0);
}
