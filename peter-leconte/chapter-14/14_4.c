#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define BESTAND "tekst.txt"
#define KOPIE "kopie.txt"

int main(void)
{
    FILE* fpin, * fpout;
    int c; //fgetc outputs an int

    if ((fpin = fopen(BESTAND, "r")) == NULL)
    {
        printf("Cant open file %s (might not exist)", BESTAND);
        exit(-1);
    }

    if ((fpout = fopen(KOPIE, "w")) == NULL)
    {
        printf("Can't open copy file %s!", KOPIE);
        exit(-1);
    }

    while ((c = fgetc(fpin)) != EOF)
    {
        if (c != (int)'\n') //Copy everything that isnt a newline. Typecasting the newline char.
            fputc(c, fpout);
    }
    printf("Succesfully copied %s to %s!", BESTAND, KOPIE);

    fclose(fpin);
    fclose(fpout);


    return 0;
}