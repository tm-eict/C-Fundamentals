#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#define BESTAND "tekst.txt"
#define KOPIE "kopie.txt"

int main(void)
{
    FILE* fpin, * fpout;

    char lijn[BUFSIZ];

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

    while (fgets(lijn, BUFSIZ, fpin) != NULL)
    {
        fputs(lijn, fpout);
        fprintf(fpout,"\n"); //for double spacing
    }
    printf("Succesfully copied %s to %s!", BESTAND, KOPIE);

    fclose(fpin);
    fclose(fpout);


    return 0;
}