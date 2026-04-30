#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int    ft_calculate_total_len(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	char *read;
	char *write;
	int word;
	int total_len;

	total_len = ft_calculate_total_len(size, strs, sep);
	dest = malloc(total_len);
	if (!dest)
		return (NULL);

	word = 0;
	write = dest;
	while (word < size)
	{
		read = strs[word];
		while (*read)
			*write++ = *read++;
		read = sep;
		while (*read && word < size - 1)
			*write++ = *read++;
		word++;
	}
	*write = '\0';
	
	return (dest);
}

int    ft_calculate_total_len(int size, char **strs, char *sep)
{
    int total = 0;
    int i = 0;
    int j = 0;

	if (size <= 0)
	{
		return (1);
	}

	// characters
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
		{
            total++;
			j++;
		}
		i++;
	}

	// seperator
	while (*sep)
	{
		total += (size - 1);
		sep++;
	}

	// null terminator
	total++;
	return (total);
}

/*
#include <stdio.h>

int main(void)
{
    char *strs[] = {"Hello", "42KL", "Lanusri"};
    char *res = ft_strjoin(3, strs, " | ");

    if (res)
    {
        printf("%s\n", res);
        free(res);
    }
    return (0);
}
*/
