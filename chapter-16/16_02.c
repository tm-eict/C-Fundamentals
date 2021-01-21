#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


FILE* openFile(char*, char*);

int main(int argc, char* argv[])
{
	if (argc < 3)
		fprintf(stderr, "Not enough arguments."), exit(-1);

	FILE* fptr1 = fopen(argv[1], "r");
	FILE* fptr2 = fopen(argv[2], "r");
	FILE* outStream;
	char buffer1[BUFSIZ];
	char buffer2[BUFSIZ];
	int line, diffs, a, b;

	outStream = argc > 3 ? fopen(argv[3], "w") : stdout;


	line = diffs = 0;
	a = fgets(buffer1, BUFSIZ, fptr1);
	b = fgets(buffer2, BUFSIZ, fptr2);

	while (line++, diffs < 10 && a && b)
	{
		if (strcmp(buffer1, buffer2) != 0) // '\n' is a char that will be checked
			fprintf(outStream, "Line %d\nfile1: %s\nfile2: %s\n", line, buffer1, buffer2), diffs++;

		a = fgets(buffer1, BUFSIZ, fptr1);
		b = fgets(buffer2, BUFSIZ, fptr2);
	}

	if (a != b && diffs < 10) // Both have to be 0
		fprintf(outStream, "The files do not have the same amount of lines.\n"), diffs++;
	else if (!diffs)
		fprintf(outStream, "The files are exactly the same.\n");


	// # Exit
	fclose(fptr1);
	fclose(fptr2);
	fclose(outStream);
	return 0;
}

FILE* openFile(char* fpath, char* mode)
{
	FILE* fptr = NULL;

	if ((fptr = fopen(fpath, mode)) == NULL)
		fprintf(stderr, "Error opening file \"%s\" with modifier \"%s\".\n", fpath, mode), exit(1);

	return fptr;
}