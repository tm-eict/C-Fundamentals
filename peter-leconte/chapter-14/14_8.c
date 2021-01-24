#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define FILENAME "text.txt"
#define MAX 5

int main(void)
{
	FILE* fp = NULL;
	char line[BUFSIZ];
	char input = NULL, test = 'x';
	int i = 0, count = 0;

	//open file
	if ((fp = fopen(FILENAME, "r")) == NULL)
	{
		fprintf(stderr, "Can't open file %s", FILENAME);
		exit(-1);
	}

	//print lines
	do
	{
		for (i = 0; i < MAX && (test = fgets(line, BUFSIZ, fp)) != NULL; i++)
			printf("%s", line);
	} while (test != NULL && (input = getchar()) == '\n');
	
	//check why it stopped
	if (fp == NULL)
	{
		printf("Reached end of file");
	}
	if (input != '\n')
	{
		printf("Closing file...");
	}

	fclose(fp);
	return 0;
}
