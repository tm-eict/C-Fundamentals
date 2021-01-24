#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TXTFILE "text.txt"

int main(void)
{
	FILE* fp;
	int i = 0;
	char line[BUFSIZ];

	if ((fp = fopen(TXTFILE, "r")) == NULL)
	{
		printf("No access to file, does not exist?");
		exit(-1);
	}

	while (i++,fgets(line, BUFSIZ, fp) != NULL)
		printf("%d %s", i, line);

	fclose(fp);
	return 0;
}