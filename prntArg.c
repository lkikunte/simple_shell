#include <stdio.h>
/**
* main
*/
int main(int argc, char *argv[])
{
	int i;
	const int arg1 = 1;

	printf("Name of the program is: %s\n", argv[0]);
	printf("The arguments are:\n");
	i = arg1;
	while(argv[i] != NULL)
	{
		printf("  %d. %s\n", i, argv[i]);
		i++;
	}
}
