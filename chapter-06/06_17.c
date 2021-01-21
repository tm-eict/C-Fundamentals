#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RECTANGLE 219
#define SIDE_SIZE 10

int choose(void);
void empty_square(int size);
void filled_square(int size);


int main(void)
{
	// # Variables
	int choice;
	int size = SIDE_SIZE;


	// # Logic
	do
	{
		choice = choose();

		switch (choice)
		{
		case 1:
			filled_square(size);
			break;
		case 2:
			empty_square(size);
			break;
		case 3:
			printf("Thanks for paying with us!\n");
			break;
		case 9:
			// Just for testing
			printf("Current size = %d\n"
				"New size = ", size);
			scanf("%d%*c", &size);
			break;
		default:
			printf("Enter a valid choice: 1, 2 or 3!\n");
			break;
		}
		
	} while (choice != 3);


	// # Exit
	return 0;
}


int choose(void)
{
	int choice;

	printf("\nWhat do you choose?\n"
		"\t1. Draw an empty square\n"
		"\t2. Draw a filled square\n"
		"\t3. Stop\n"
		" ");
	scanf("%d%*c", &choice);

	return choice;
}

void filled_square(size)
{
	// NOTE: width, height for rectangle support
	const char rectangle = RECTANGLE;
	const int width = size * 2;
	const int height = size;

	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < width; ++j)
			printf("%c", rectangle);
		printf("\n");
	}
}


void empty_square(int size)
{
	// NOTE: width, height for rectangle support
	const char rectangle = RECTANGLE;
	const int width = size * 2;
	const int height = size;

	// First Row
	for (int i = 0; i < width; ++i)
		printf("%c", rectangle);
	printf("\n");

	// (if height >= 3) ? [1, -2] squares 
	for (int i = 2; i < height; ++i)
	{
		// First 2 rectangle (1 square)
		printf("%c%c", rectangle, rectangle);

		// "Filled" part
		for (int j = 4; j < width; ++j)
			printf(" ");

		// Last 2 rectangle (1 square)
		printf("%c%c", rectangle, rectangle);
		printf("\n");
	}

	// Square with a height of 1 means only 1 rows but 2 columns
	if (height > 1)
		// Last row?
		for (int i = 0; i < width; ++i)
			printf("%c", rectangle);
	printf("\n");
}
