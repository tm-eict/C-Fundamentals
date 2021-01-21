#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 16

void readName(char[]);
void printName(char[]);

int main(void)
{
	// # Variables
	char name[SIZE];

	// # Input
	printf("Enter your first name: ");
	readName(name);

	// # Output
	printName(name);

	// # Exit
	return 0;
}

void readName(char name[])
{
	scanf("%s%*c", name);
}
void printName(char name[])
{
	printf("%s\n", name);
}