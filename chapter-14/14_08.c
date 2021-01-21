#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MYFILE "file.txt"
#define BATCH 20

void generateFile(char*, int);
int waitForChar(char);


int main(void)
{
	// # Variables
	char line[BUFSIZ];
	FILE* fp;



	// Generate file
	generateFile(MYFILE, 100);

	// Open file
	if ((fp = fopen(MYFILE, "r")) == NULL)
		printf("Error opening file \"%s\" for write.\n", MYFILE), exit(1);

	// Print lines
	do

		for (int i = 0; i < BATCH && fgets(line, BUFSIZ, fp) != NULL; i++)
			printf("%s", line);
	while (fp != NULL && waitForChar('\n'));


	// # Exit
	return 0;
}

void generateFile(char* file, int lines)
{
	FILE* fp;

	if ((fp = fopen(file, "w")) == NULL)
		printf("Error opening file \"%s\" for write.\n", file), exit(1);

	for (int i = 1; i <= lines; i++)
		fprintf(fp, "Line %d\n", i);

	if (fclose(fp) == EOF)
		printf("Error closing to file \"%s\".\n", file), exit(2);
}

int waitForChar(char c)
{
	while (getchar() != c);

	return 1;
}
