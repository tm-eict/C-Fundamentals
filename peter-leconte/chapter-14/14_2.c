#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// # Video les 8, 22/11/2020

//Ex 14.2
/*
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
    }
    printf("Succesfully copied %s to %s!", BESTAND, KOPIE);
       
    fclose(fpin);
    fclose(fpout);


    return 0;
}
*/

//Extra voorbeeld oefening
#define BESTAND "file.txt"
#define MAXNBR 5

int main(void)
{
    FILE* fp;
    int num, sum=0, ret;

    fp = fopen(BESTAND, "r");
    if (fp == NULL)
    {
        printf("Can't open %s.", BESTAND);
        exit(-1);
    }

    ret = fscanf(fp, "%d%*c", &num);

    while (ret > 0)
    {
        sum += num;
        ret = fscanf(fp, "%d%*c", &num);
    }

    printf("sum is %d", sum);

    fclose(fp);

    return 0;
}