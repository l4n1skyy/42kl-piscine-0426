#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "hello";
    char dest[32] = "xxxxx";

    printf("src = %s\n", src);
    printf("before dest = %s\n", dest);
    ft_strcpy(dest, src);
    printf("after dest = %s\n", dest);
    return (0);
}
