#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INFOTXT "names.txt"

int main(void)
{
    FILE* fp;
    char name[64];
    int i = 0, count, age;

    if ((fp = fopen(INFOTXT, "a")) == NULL)
    {
        printf("Cant open file %s (might not exist)", INFOTXT);
        exit(-1);
    }

    printf("How many people do you wanna enter? ");
    scanf("%d%*c", &count);

    while (i < count)
    {
        printf("Enter name and age (eg: Smith 42): ");
        scanf("%s %d%*c", &name, &age);
        fprintf(fp, "name: %s\nage: %d\n\n", name, age);
        i++;
    }


    fclose(fp);

	return 0;
}
