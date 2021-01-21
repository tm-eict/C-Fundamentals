#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POPULATION 3

typedef struct
{
	char name[32];
	char town[32];
} Person;

Person readPerson();
char* searchTown(char*, Person[], int);

int main(void)
{
	Person people[POPULATION];
	Person person;

	for (int i = 0; i < POPULATION; i++)
		people[i] = readPerson();

	fprintf(stdout, "Enter the name of the person you want to search for: ");
	scanf("%31s%*c", person.name);

	strcpy(person.town, searchTown(person.name, people, POPULATION));

	printf("This person lives in %s\n", person.town);

	// # Exit
	return 0;
}

Person readPerson()
{
	Person person;

	fprintf(stdout, "Enter a name: ");
	fscanf(stdin, "%31s%*c", person.name);

	fprintf(stdout, "Enter a town: ");
	fscanf(stdin, "%31s%*c", person.town);

	return person;
}

char* searchTown(char* name, Person people[], int population)
{
	for (int i = 0; i < population; i++)
		if (strcmp(people[i].name, name) == 0)
			return people[i].town;

	return "Unknown";
}