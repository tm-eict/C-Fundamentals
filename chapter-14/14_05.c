#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MYFILE "textFile.txt"



int main(void)
{
	// Variables
	int i = 0;
	char line[BUFSIZ];
	FILE* fp = NULL;	// Do we still need to do this with file pointers?

	// Open file
	if ((fp = fopen(MYFILE, "r")) == NULL)
		printf("Error opening file \"%s\" for read.\n", MYFILE), exit(1);


	while (++i, fgets(line, BUFSIZ, fp) != NULL)
		printf("Line %d: %s", i, line);





	fclose(fp);


	// # Exit
	return 0;
}