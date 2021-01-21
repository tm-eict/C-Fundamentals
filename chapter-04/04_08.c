#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	char  firstName[16], lastName[32];


	// Input
	printf("First name: ");
	scanf("%s%*c", firstName);

	printf("Last name: ");
	gets(lastName);


	// Output
	printf("Name: %s %s", firstName, lastName);


	// Exit
	return 0;
}