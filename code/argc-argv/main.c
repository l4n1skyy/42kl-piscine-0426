#include <stdio.h>

// argc -> cli arguments including name of program
// argv -> argv[0] program name, rest is argument
// 
int	main(int argc, char *argv[])
{
    printf("You have entered %d arguments:\n", argc);
	
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}

