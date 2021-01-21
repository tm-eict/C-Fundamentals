#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXTFILE "file.txt"
#define PATTERN "FILE"

int main(void)
{
	// # Variables
	FILE* fp = NULL;
	char line[BUFSIZ];
	int count = 0;

	// Open file to read
	if ((fp = fopen(TEXTFILE, "r")) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for read.\n", TEXTFILE), exit(1);

	// Read the file
	while (count++, (fgets(line, BUFSIZ, fp)) != NULL)
		if (strstr(line, PATTERN) != NULL)
			printf("%4d| %s", count, line);

	fclose(fp);

	// # Exit
	return 0;
}