#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIMIT

int main(void)
{
	// # Variables
	int num;

	// Main loop
	do
	{
		// # Input
		do
		{
			printf("Enter an integer number (in interval [-30 , 30]): ");
			scanf("%d%*c", &num);
		} while (!(-30 <= num && num <= 30));

		// # Logic
		if (num != 0) {
			// # Logic & Ouput
			for (int i = -30; i < 0; i++)
				printf("%c", num <= i ? '*' : '.');

			printf("|");

			for (int i = 0; i < 30; i++)
				printf("%c", num >= i ? '*' : '.');

			printf("\n");
		}
	} while (num != 0);

	// # Exit
	return 0;
}