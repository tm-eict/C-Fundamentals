#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 5
#define LENGTH 20

typedef struct
{
	char* firstName[LENGTH];
	char* name[LENGTH];
} Person;

void readPerson(Person[], int);
void printPerson(Person);

int main(void)
{
	// # Variables
	Person people[N];


	// # Input
	readPerson(people, N);

	// # Output
	for (int i = 0; i < N; i++)
		printPerson(people[i]);


	// # Exit
	return 0;
}

void readPerson(Person people[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter Firstname lastname (seperated by space): ");
		scanf("%s%*c%s%*c", people[i].firstName, &people[i].name);
	}
}

void printPerson(Person person)
{
	printf("Firstname: %s, name: %s\n", person.firstName, person.name);
}
