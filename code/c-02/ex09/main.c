#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "hELlo wORld";

    printf("before: %s\n", str);
    ft_strcapitalize(str);
    printf("after: %s\n", str);
    return (0);
}
