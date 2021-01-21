#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[BUFSIZ];
	unsigned char age;
	unsigned int salary;
} Person;

FILE* openFile(char*, char*);
Person readPerson();

int main(void)
{
	int population;
	FILE* fptr = NULL;
	Person* people = NULL;

	fprintf(stdout, "How many people do you want to enter? ");
	fscanf(stdin, "%d%*c", &population);

	people = (Person*)calloc(population, sizeof(Person)); // memory does not need to be set to 0 this is just usefull for file compression

	fptr = openFile("struct.txt", "wb");
	for (int i = 0; i < population; i++)
	{
		printf("Enter a name: ");
		gets(people[i].name);

		printf("Enter a age: ");
		scanf("%uud%*c", &(people[i].age));

		printf("Enter a salary: ");
		scanf("%u%*c", &(people[i].salary));


		fwrite((people + i), sizeof(Person), 1, fptr);
		fflush(fptr);	// Don't know is this is needed, just understand the meaning of "the structure containing that data is written to a file **at once**."
	}
	fclose(fptr);

	// # Exit
	free(people);
	return 0;
}

FILE* openFile(char* fpath, char* mode)
{
	FILE* fptr = NULL;

	if ((fptr = fopen(fpath, mode)) == NULL)
		fprintf(stderr, "Error opening file \"%s\" with modifier \"%s\".\n", fpath, mode), exit(-1);

	return fptr;
}