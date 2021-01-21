#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 5
#define LENGTH 20

typedef struct
{
	int day;
	char month[3];
	int year;
} Date;

typedef struct
{
	char firstName[LENGTH];
	char name[LENGTH];
	Date dateOfBirth;
	Date enrollmentDate;
} Person;

Date readDate();
void readPerson(Person[], int);
void printDate(Date);
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

Date readDate()
{
	Date date;

	printf("Enter a date: ((int)DAY (char[3])MONTH (int)YEAR: ");
	scanf("%d%*c%3s%*c%d%*c", &date.day, date.month, &date.year);

	return date;
}

void readPerson(Person people[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter Firstname lastname (seperated by space): ");
		scanf("%s%*c%s%*c", people[i].firstName, &people[i].name);
		printf("Day of birth\n");
		people[i].dateOfBirth = readDate();
		printf("Day of enrollment\n");
		people[i].enrollmentDate = readDate();
	}
}

void printDate(Date date)
{
	printf("%d %s %d", date.day, date.month, date.year);
}

void printPerson(Person person)
{
	printf("Firstname: %s, name: %s\n, birth date: ", person.firstName, person.name);
	printDate(person.dateOfBirth);
	printf(", day of enrollmen: ");
	printDate(person.enrollmentDate);
	puts("");
}
