#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	short int streetNum, zipCode;
	char firstName[16], lastName[32], streetName[32], town[16];


	// Input
	printf("Last name: ");
	gets(&lastName);

	printf("First Name: ");
	scanf("%s%*c", &firstName);

	printf("Street, street number, zip code, town: ");
	scanf("%s%hd%hd%s%*c", streetName, &streetNum, &zipCode, town);


	// Ouput
	printf(
		"%s\t%s\n"
		"%s\t%hd\n"
		"%hd\t%s\n", firstName, lastName, streetName, streetNum, zipCode, town);


	// Exit
	return 0;
}
