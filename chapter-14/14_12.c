#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATAFILE "dataFile.txt"

typedef struct
{
	char name[16];
	unsigned short age;
} Person;

void readPeople(Person*, int count);
FILE* openFILE(char*, char*);
void writePeople(char*, Person*, int);
void writePerson(FILE*, Person);

int main(void)
{
	Person* people = NULL;
	int count;

	// Get how many persons and allocate the space for it
	printf("For how many people do you want to enter data? ");
	scanf("%d%*c", &count);
	people = malloc(count * sizeof(Person));

	// Get the all the persons
	readPeople(people, count);

	// Write persons to a file
	writePeople(DATAFILE, people, count);

	// Clean Up
	if (people)
		free(people);

	// # Exit
	return 0;
}

void readPeople(Person* persons, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("Enter name and age: ");
		scanf("%s%*c%hu%*c", persons[i].firstName, &persons[i].age);
	}
}

FILE* openFile(char* fpath, char* mode)
{
	FILE* fptr = NULL;

	if ((fptr = fopen(fpath, mode)) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for Write.\n", mode), exit(1);

	return fptr;
}

void writePeople(char* fpath, Person* people, int count)
{
	FILE* fptr = openFile(fpath, "w");

	/*
	fprintf(fptr, "name: %s\n"
		"age: %hu\n", people[0].firstName, people[0].age);

	for (int i = 1; i < count; i++)
		fprintf(fptr, "\nname: %s\n"
			"age: %hu\n", people[i].firstName, people[i].age);
			*/
	for (int i = 1; i < count; i++)
		writePerson(stdout, people[i]);

	fclose(fptr);
}

void writePerson(FILE* fptr, Person person)
{
	fprintf(fptr, "name: %s\n"
		"age: %hu\n\n", person.firstName, person.age);
}

