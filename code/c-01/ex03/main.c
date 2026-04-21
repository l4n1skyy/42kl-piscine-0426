#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 8;
    b = 3;
    printf("input: a = %d, b = %d\n", a, b);
    ft_div_mod(a, b, &div, &mod);
    printf("output: div = %d, mod = %d\n", div, mod);
    return (0);
}
