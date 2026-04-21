#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char dest[32] = "Hello ";
    char src[] = "42Piscine";
    unsigned int nb;

    nb = 2;
    printf("before dest = %s, src = %s, nb = %u\n", dest, src, nb);
    ft_strncat(dest, src, nb);
    printf("after dest = %s\n", dest);
    return (0);
}
