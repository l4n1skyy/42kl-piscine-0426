#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[10] = "Hi";
    char src[] = "42";
    unsigned int size;
    unsigned int ret;

    size = 10;
    printf("before dest = %s, src = %s, size = %u\n", dest, src, size);
    ret = ft_strlcat(dest, src, size);
    printf("after dest = %s, ret = %u\n", dest, ret);
    return (0);
}
