#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[5];
    int i;

    tab[0] = 4;
    tab[1] = 1;
    tab[2] = 3;
    tab[3] = 5;
    tab[4] = 2;
    printf("before: ");
    i = 0;
    while (i < 5)
    {
        printf("%d", tab[i]);
        if (i < 4)
            printf(" ");
        i++;
    }
    printf("\n");
    ft_sort_int_tab(tab, 5);
    printf("after: ");
    i = 0;
    while (i < 5)
    {
        printf("%d", tab[i]);
        if (i < 4)
            printf(" ");
        i++;
    }
    printf("\n");
    return (0);
}
