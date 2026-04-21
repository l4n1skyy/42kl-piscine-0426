#include <stdio.h>

void    ft_ultimate_ft(int *********nbr);

int     main(void)
{
    int n = 5;
    
    // You cannot skip this! Every pointer needs its own variable.
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********nptr = &ptr8;

    printf("Before: %d\n", n);
    
    // Pass the 9th pointer in the chain
    ft_ultimate_ft(nptr);
    
    printf("After: %d\n", n);
    
    return 0;
}
