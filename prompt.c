#include <stdlib.h>
#include <stdio.h>

/**
*  main -  prints "$ ", reads command from user, prints it on the next line
*
**/
int main()
{
	char *buffer;
	size_t n = 1;

	buffer = (char *)malloc(n*sizeof(char));
	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s", buffer);
	return(0);
}
