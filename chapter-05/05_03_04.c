#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROWS 22
#define COLUMNS 40

int main(void)
{
	// # Constants
	const char rectangle = 219;


	// # Logic & Output
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++)
			printf("%c", rectangle);
		printf("\n");
	}


	// # Exit
	return 0;
}