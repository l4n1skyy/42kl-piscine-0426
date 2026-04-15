#include <stdio.h>

void ft_mul(int* n1ptr, int n2);

int main(void) {
	int n1 = 2;
	int n2 = 5;
	
	printf("%d\n", n1);
	ft_mul(&n1, n2);
	printf("%d", n1);
}

void ft_mul(int* n1ptr, int n2) {
	*n1ptr = n2 * *n1ptr;
}
