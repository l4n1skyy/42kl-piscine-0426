#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);
int	get_alloc_size(int size, char **strs, char *sep);

char *ft_strjoin(int size, char **strs, char *sep)
{
	int total_size = get_alloc_size(size, strs, sep);
	char *dest = malloc(sizeof(char) * total_size);

	// moving pointers
	char *write = dest;
	char *read;

	int w = -1;
	while (++w < size)
	{
		read = strs[w];
		while (*read)
			*write++ = *read++; // write, step forward

		read = sep;
	
		while (*read && w != size - 1)
			*write++ = *read++;
	}
	*write = '\0';
	return (dest);
}

int	get_alloc_size(int size, char **strs, char *sep)
{
	// characters
	int	w = -1;
	int c;
	int t = 0;
	while (++w < size)
	{
		c = 0;
		while (strs[w][c])
		{
			c++;
			t++;
		}
	}
	// seperators
	while (*sep++)
		t += (size - 1);
	// end of string \0
	t++;
	return (t);
}
