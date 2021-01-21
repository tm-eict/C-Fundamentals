#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE1 "file1.txt"
#define FILE2 "file2.txt"



int main(void)
{
	// Variables
	char line[BUFSIZ * 2];
	FILE* fp1, * fp2;

	// Open old file
	if ((fp1 = fopen(FILE1, "r")) == NULL)
		printf("Error opening file \"%s\" for read.\n", FILE1), exit(1);

	// Flush/create new file
	if ((fp2 = fopen(FILE2, "r")) == NULL)
		printf("Error opening file \"%s\" for write.\n", FILE2), exit(2);

	// Copy lines
	while (fgets(line, BUFSIZ, fp1) != NULL && fgets(&line[strlen(line)], BUFSIZ, fp2) != NULL)
		printf("%s", line);


	// Close file streams
	fclose(fp1);
	fclose(fp2);


	// # Exit
	return 0;
}