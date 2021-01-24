#define _CRT_SECURE_NO_WARNINGS

#include "my_header.h"

int main(int argc, char * argv[])
{
	FILE* fp;
	int max, grens, aantal, keuze;
	datum vandaag;
	persoon* lijst;

	if (argc != 7)
	{
		printf("Geef de correcte argument in:\n.exe <file><dag><maand><jaar><leeftijdsgrends><maxaantal>");
		exit(-1);
	}

	max = atoi(argv[6]);
	vandaag.dag = atoi(argv[2]);
	vandaag.maand = atoi(argv[3]);
	vandaag.jaar = atoi(argv[4]);
	grens = atoi(argv[5]);

	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Cant open file");
		exit(2);
	}

	lijst = (persoon*)malloc(max * sizeof(persoon));

	aantal = lees(lijst, grens, vandaag, max, fp);
	keuze = kies();
	printen(lijst, vandaag, aantal, keuze);

	fclose(fp);
	free(lijst);

	return 0;
}

int lees(persoon* lijst, int grens, datum vandaag, int max, FILE* fp)
{
	int leeftijd, i = 0;
	persoon mens;

	while (fgets(mens.naam, LEN, fp) != NULL && i < max)
	{
		fscanf(fp, "%d%d%d%*c", &(mens.gebdatum.dag), &(mens.gebdatum.maand), &(mens.gebdatum.jaar));
		fscanf(fp, "%s%*c", mens.gemeente);
		leeftijd = bereken(vandaag, mens);
		if (leeftijd >= grens)
		{
			lijst[i] = mens;
			i++;
		}
	}

	if (i == 0)
	{
		printf("Geen personen gevonden die ouder zijn dan %d jaar", grens);
		exit(3);
	}

	return i;
}

int bereken(datum vandaag, persoon mens)
{
	int jaren, maanden, dagen;
	jaren = vandaag.jaar - mens.gebdatum.jaar;
	maanden = vandaag.maand - mens.gebdatum.maand;
	dagen = vandaag.dag - mens.gebdatum.dag;

	if (dagen < 0)
	{
		maanden--;
		dagen += 30;
	}

	if (maanden < 0)
	{
		jaren--;
		maanden += 12;
	}

	return jaren;
}

int kies(void)
{
	int keuze;
	printf("Maak uw keuze:\n1\tjongste\n2\tin gemeente\nkeuze: ");
	scanf("%d%*c", &keuze);

	while (keuze != 1 && keuze != 2)
	{
		printf("\nDit is geen geldige keuze!\n");
		printf("Maak uw keuze:\n1\tjongste\n2\tin gemeente\nkeuze: ");
		scanf("%d%*c", &keuze);
	}
	
	return keuze;
}

void printen(persoon* lijst, datum vandaag, int aantal, int keuze)
{
	int i, j;
	int huidige, leeftijd, index;
	char gemeente[LEN];

	if (keuze == 1)
	{
		leeftijd = bereken(vandaag, lijst[0]);
		index = 0;
		printf("De jongste in deze leeftijdscatagorie is:\n\n");
		for (i = 0; i < aantal; i++)
		{
			huidige = bereken(vandaag, lijst[i]);
			if (huidige < leeftijd)
			{
				leeftijd = huidige;
				index = i;
			}
		}

		printf("%s%2d\t%x\t", lijst[index].naam, leeftijd, leeftijd);
		for (j = 15; j >= 0; j--)
		{
			printf("%d", (leeftijd >> j) & 1);
			if (j % 4 == 0)
				printf(" ");
		}
		printf("\n\n");
	}
	else
	{
		printf("Van welke gemeente wil je de leeftijden kennen? ");
		gets(gemeente);
		printf("\nDe inwoners van de gemeente %s in de gekozen leeftijdscatagorie zijn: \n\n", gemeente);

		for (i = 0; i < aantal; i++)
		{
			if (strcmp(lijst[i].gemeente, gemeente) == 0) //Opmerking op 1:12:35
				printf("%s%2d\n\n", lijst[i].naam, bereken(vandaag, lijst[i]));
		}
	}
}
