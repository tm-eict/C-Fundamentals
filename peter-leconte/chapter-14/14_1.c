#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TXTFILE "tekst.txt"

int main(void)
{
	FILE* fp;
	char line[BUFSIZ];

	//Open file
	fp = fopen(TXTFILE, "r");

	//Check if not NULL -> file doesnt exist
	if (fp == NULL)
	{
		printf("File can't be opened");
		exit(-1);
	}

	//get the line and put in buffer, check if not NULL (=EOF), print line in buffer till EOF.
	while (fgets(line, BUFSIZ, fp) != NULL)
		printf("%s", line);

	//Always close the file when done
	fclose(fp);

	return 0;
}