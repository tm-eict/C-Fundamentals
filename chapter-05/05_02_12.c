#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	short int digit;

	// # Input
	printf("Enter a digit: ");
	scanf("%d%*c", &digit);


	// # Logic & Oupt
	// I want an array...
	switch (digit)
	{
	case 0:
		printf("You have entered the digit zero.\n");
		break;
	case 1:
		printf("You have entered the digit one.\n");
		break;
	case 2:
		printf("You have entered the digit two.\n");
		break;
	case 3:
		printf("You have entered the digit three.\n");
		break;
	case 4:
		printf("You have entered the digit four.\n");
		break;
	case 5:
		printf("You have entered the digit five.\n");
		break;
	case 6:
		printf("You have entered the digit six.\n");
		break;
	case 7:
		printf("You have entered the digit seven.\n");
		break;
	case 8:
		printf("You have entered the digit eight.\n");
		break;
	case 9:
		printf("You have entered the digit nine.\n");
		break;
	default:
		printf("The number you entered is not a digit.\n");
		break;
	}



	// Exit
	return 0;
}