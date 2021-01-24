#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXTFILE "text.txt"

int main(void)
{
    FILE* fp;
    int i = 0;
    char line[BUFSIZ];
    char needle[BUFSIZ];
    printf("Enter search-query (case/char-sensitive): ");
    gets(needle);

    if ((fp = fopen(TXTFILE, "r")) == NULL)
    {
        printf("Cant open file %s (might not exist)", TXTFILE);
        exit(-1);
    }

    while (i++, fgets(line, BUFSIZ, fp) != NULL)
        if (strstr(line, needle) != NULL)
            printf("%2d| %s", i, line);

    fclose(fp);

	return 0;
}