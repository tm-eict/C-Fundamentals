#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TXTFILE "..\\14_12\\names.txt"

int main(void)
{
    FILE* fp;
    int age;
    char line[BUFSIZ];
    char needle[BUFSIZ];
    printf("Enter a name to search: ");
    gets(needle);

    if ((fp = fopen(TXTFILE, "r")) == NULL)
    {
        printf("Cant open file %s (might not exist)", TXTFILE);
        exit(-1);
    }

    while (fscanf(fp, "%*s%s%*c", line) > 0)
    {
        if (strcmp(line, needle) == 0)
        {
            printf("%s\n", line);
            if(fscanf(fp, "%*s%d%*c", &age) > 0)
                printf("Age: %d\n", age);
        }
    }

    fclose(fp);

	return 0;
}