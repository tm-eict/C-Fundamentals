#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


FILE* openFile(char*, char*);

int main(int argc, char* argv[])
{
	if (argc < 3)
		fprintf(stderr, "Not enough arguments."), exit(-1);

	FILE* sourceFile = fopen(argv[1], "r");
	FILE* destinationFile = fopen(argv[2], "w");
	char buffer[BUFSIZ];

	printf("%s", argv[1]);
	printf("%s", argv[2]);

	while (fgets(buffer, BUFSIZ, sourceFile) != NULL)
		fputs(buffer, destinationFile);


	// # Exit
	fclose(sourceFile);
	fclose(destinationFile);
	return 0;
}

FILE* openFile(char* fpath, char* mode)
{
	FILE* fptr = NULL;

	if ((fptr = fopen(fpath, mode)) == NULL)
		fprintf(stderr, "Error opening file \"%s\" with modifier \"%s\".\n", fpath, mode), exit(1);

	return fptr;
}