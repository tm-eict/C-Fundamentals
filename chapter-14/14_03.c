#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define OLDFILE "oldFile.txt"
#define NEWFILE "newFile.txt"


int main(void)
{
	// Variables
	char line[BUFSIZ];
	FILE* ofp = NULL, * nfp = NULL;

	// Open old file
	if ((ofp = fopen(OLDFILE, "r")) == NULL)
		printf("Error opening file \"%s\" for read.\n", OLDFILE), exit(1);

	// Flush/create new file
	if ((nfp = fopen(NEWFILE, "w")) == NULL)
		printf("Error opening file \"%s\" for write.\n", NEWFILE), exit(2);

	// Copy lines
	while (fgets(line, BUFSIZ, ofp) != NULL)
		fputs(line, nfp);

	// Close file streams
	fclose(ofp);
	fclose(nfp);


	// # Exit
	return 0;
}