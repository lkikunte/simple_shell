#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*  main - splits string and returns array of each word
*
**/
int main()
{
	char *buffer;
	char *word;
	size_t n = 1;
	int i;

	buffer = (char *)malloc(n*sizeof(char));
	printf("This program with take your sentence and split it into individual words.\nNow enter you sentence:\n");
	getline(&buffer, &n, stdin);
	word = strtok(buffer, " ");
	printf("These are the words in your sentence:\n");
	i = 1;
	while(word != NULL)
	{
		printf("  %d. %s\n", i, word);
		word = strtok(NULL, " ");
		i++;
	}
	return(0);
}
