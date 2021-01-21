#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DATAFILE "dataFile.txt"

typedef struct
{
	char firstName[16];
	unsigned short age;
} Person;

int askPeople(char*, Person**);	// Pointer of pointer otherwise I can't acces the person pointer made in main
void printPeople(Person*, int);

int main(void)
{
	// Variables
	Person* people = NULL;
	int count;


	// Get the all the persons
	count = askPeople(DATAFILE, &people);

	printf("name: %s\n", people[0].firstName);
	printf("age: %hu\n", people[0].age);

	// Write persons to a file
	printPeople(people, count);

	// Clean Up
	if (people)
		free(people);

	// # Exit
	return 0;
}

int askPeople(char* dataFile, Person** people)
{
	FILE* fptr = NULL;
	char line[BUFSIZ];
	int count = 1;

	if ((fptr = fopen(dataFile, "r")) == NULL)
		fprintf(stderr, "Error opening file \"%s\" for read.\n", dataFile), exit(1);

	// Get line count and (int)divide to get total number of persons
	while ((fgets(line, BUFSIZ, fptr)) != NULL)
		count++;
	count /= 3;

	*people = malloc(count * sizeof(Person));
	rewind(fptr);

	for (int i = 0; i < count; i++)
		fscanf(fptr, "%*s%s%*c%*s%hu%*c", (*people)[i].firstName, &(*people)[i].age); // (*persons) needed otherwise [i] applied on the pointer 

	return count;
}

void printPeople(Person* people, int count)
{
	for (int i = 0; i < count; i++)
		printf("name: %s\n",
			"age: %hu\n", people[i].firstName, people[i].age);
}
