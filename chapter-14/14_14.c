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

typedef struct
{
	char* explanation;
	void (*function)(char*);
} Option;

int askPeople(char*, Person**);	// Pointer of pointer since I need to change where the original pointer is pointing
void completePerson(char*, Person*);
void opt1(char*);
void opt2(char*);
void opt3(char*);
void opt4(char*);
int findPersonsAge(char*, char*);
char* findPersonsName(char*, unsigned short);
void readPeople(Person*, int count);
Person readPerson(void);
FILE* openFile(char*, char*);
void writePeople(char*, Person*, int);
void writePerson(FILE*, Person);

int main(void)
{
	int choice;
	Option options[4] = { {"Enter people", opt1}, {"Print people", opt2}, {"Find persons", opt3}, {"Exit", opt4} };

	do
	{
		for (int i = 0; i < 4; i++)
			printf("%2d. %s\n", i + 1, options[i].explanation);

		printf(" Choice: ");
		scanf("%d%*c", &choice);
		puts("");

		if (choice > 0 && choice <= 4)
			options[choice - 1].function(DATAFILE);
		else
			fprintf(stderr, "Invalid choice\n");

		puts("");
	} while (choice != 4);

	// # Exit
	return 0;
}

/*
* TODO: Need to find a way to read this from stdin
*/
int askPeople(char* fpath, Person** people)
{
	FILE* fptr = openFile(fpath, "r");
	char line[BUFSIZ];
	int count = 0;

	// Get lines that just contain '\n' this will be the same as the person count
	while ((fgets(line, BUFSIZ, fptr)) != NULL)
		if (*line == '\n')
			count++;

	*people = (Person*)malloc(count * sizeof(Person));
	rewind(fptr);

	for (int i = 0; i < count; i++)
		fscanf(fptr, "%*s%s%*c%*s%hu%*c", (*people)[i].name, &(*people)[i].age); // (*persons) needed otherwise [i] applied on the pointer 

	fclose(fptr);
	return count;
}


void completePerson(char* dataFile, Person* person)
{
	if (person->name == 0)
		strcpy(person->name, findPersonsName(dataFile, person->age));
	else
		person->age = findPersonsAge(dataFile, person->name);
}

int findPersonsAge(char* dataFile, char* name)
{
	FILE* fptr = openFile(dataFile, "r");
	Person person = { "", -1 };

	while (fscanf(fptr, "%*s%15s%*s", person.name))
	{
		if (strcmp(person.name, name) == 0)
		{
			fscanf(fptr, "%*s%hu%*c", &person.age);
			fclose(fptr);
			return person.age;
		}
	}

	fclose(fptr);
	return person.age;
}

char* findPersonsName(char* dataFile, unsigned short age)
{
	// TODO: make this function
	return "Anonymous";
}

void readPeople(Person* persons, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("Enter name and age: ");
		scanf("%s%*c%hu%*c", persons[i].name, &persons[i].age);
	}
}

FILE* openFile(char* fpath, char* mode)
{
	FILE* fptr = NULL;

	if ((fptr = fopen(fpath, mode)) == NULL)
		fprintf(stderr, "Error opening file \"%s\" with modifier \"%s\".\n", fpath, mode), exit(1);

	return fptr;
}


void opt1(char* fpath)
{
	int count;
	FILE* fptr;
	Person* people = NULL;

	printf("For how many people do you want to enter data? ");
	scanf("%d%*c", &count);

	people = (Person*)malloc(count * sizeof(Person));

	// Get the all the people
	readPeople(people, count);

	// Write people to a file
	fptr = openFile(fpath, "w");
	writePeople(fptr, people, count);

	// Clean up
	free(people);	// No slavery
	fclose(fptr);
	puts("");
}

void opt2(char* dataFile)
{
	int count;
	Person* people = NULL;

	count = askPeople(dataFile, &people);
	writePeople(stdout, people, count);

	free(people);
}

void opt3(char* fpath)
{
	Person person;

	printf("Enter the name of the person you want to find: ");
	
	// %*c replaced by gets(); this way I am sure next input is another line
	scanf("%15s", person.name);
	gets();

	completePerson(fpath, &person);
	writePerson(stdout, person);
}

void opt4(char* fpath)
{
	printf("Your work is saved in %s.\n"
		"Good bye!\n", fpath);
}

void writePeople(FILE* fptr, Person* people, int count)
{
	for (int i = 0; i < count; i++)
		writePerson(fptr, people[i]);
}

void writePerson(FILE* fptr, Person person)
{
	fprintf(fptr, "name: %s\n"
		"age: %hu\n\n", person.name, person.age);
}