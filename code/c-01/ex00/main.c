#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int n;

    n = 0;
    printf("before: n = %d\n", n);
    ft_ft(&n);
    printf("after: n = %d\n", n);
    return (0);
}
