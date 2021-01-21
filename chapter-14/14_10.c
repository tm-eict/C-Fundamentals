#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define FILE1 "numbers1.txt"
#define FILE2 "numbers2.txt"
#define OUTFILE "ordered.txt"

int main(void)
{
	// Variables
	FILE* fp1, * fp2, *ofp;
	int numf1, numf2, end1, end2;
	char line[BUFSIZ];

	// Open files to read
	if ((fp1 = fopen(FILE1, "r")) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for read.\n", FILE1), exit(1);
	if ((fp2 = fopen(FILE2, "r")) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for read.\n", FILE2), exit(2);
	

	// Print files
	fgets(line, BUFSIZ, fp1);
	printf("%s:\t%s\n", FILE1, line);
	fgets(line, BUFSIZ, fp2);
	printf("%s:\t%s\n"
		"yields: ", FILE2, line);

	// Put pointers back at the start of the file
	rewind(fp1);
	rewind(fp2);

	// Open file to write
	if ((ofp = fopen(OUTFILE, "w")) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for Write.\n", OUTFILE), exit(3);

	// Read and print in order
	end1 = fscanf(fp1, "%d%*c", &numf1);
	end2 = fscanf(fp2, "%d%*c", &numf2);
	while (end1 > 0 || end2 > 0)
	{
		if (numf1 < numf2 && end1 > 0)
		{
			printf("%d ", numf1);
			fprintf(ofp, "%d ", numf1);
			end1 = fscanf(fp1, "%d%*c", &numf1);
		}
		else if (end2 > 0)
		{
			printf("%d ", numf2);
			fprintf(ofp, "%d ", numf2);
			end2 = fscanf(fp2, "%d%*c", &numf2);
		}
	}

	// Close file streams
	_fcloseall();


	// # Exit
	return 0;
}