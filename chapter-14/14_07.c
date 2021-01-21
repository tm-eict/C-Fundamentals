#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
	// # Variables
	FILE* fp = NULL;
	char file[30];
	char content[BUFSIZ];

	// # Input
	printf("Enter file name: ");
	scanf("%s%*c", file);

	*content = strlen(file);
	file[*content] = '.';
	printf("Enter file extension: ");
	scanf("%s%*c", (file + *content + 1));

	printf("Enter your text: ");
	gets(content);

	printf("%s\n", file);

	// Open file
	if ((fp = fopen(file, "r")) == NULL)
		printf("Error opening file \"%s\" for read.\n", file), exit(1);
	else
		printf("File has been created!");


	// Write file
	if (fputs(content, fp) == EOF)
		printf("Error writing to file \"%s\".\n", file), exit(2);
	else
		printf("Text has been written\n");

	// Close file
	if (fclose(fp) == EOF)
		printf("Error closing to file \"%s\".\n", file), exit(3);
	else
		printf("File closed\n");


	// # Exit
	return 0;
}