#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define OLDFILE "oldFile.txt"
#define NEWFILE "newFile.txt"


void removeChar(char[], char);

int main(void)
{
	// Variables
	char line[BUFSIZ];
	FILE* ofp = NULL, * nfp;

	// Open old file
	if ((ofp = fopen(OLDFILE, "r")) == NULL)
		printf("Error opening file \"%s\" for read.\n", OLDFILE), exit(1);

	// Flush/create new file
	if ((nfp = fopen(NEWFILE, "w")) == NULL)
		printf("Error opening file \"%s\" for write.\n", NEWFILE), exit(2);

	// Copy lines
	while (fgets(line, BUFSIZ, ofp) != NULL)
		if (*line != '\n')
			fputs(line, nfp);


	// Close file streams
	fclose(ofp);
	fclose(nfp);

	// # Exit
	return 0;
}

void removeChar(char str[], char c)
{
	if (*str == '\0')
		return;

	char* r = str;

	do
	{
		if (*r == c)
			continue;
		else if (str != r)
			*str = *r;
		str++;
	} while (*++r);
	*str = '\0';
}