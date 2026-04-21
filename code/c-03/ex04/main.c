#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char *res;

    res = ft_strstr("Hello 42", "42");
    printf("find in 'Hello 42': %s\n", res ? res : "(null)");
    res = ft_strstr("Hello", "42");
    printf("find in 'Hello': %s\n", res ? res : "(null)");
    return (0);
}
