#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Constants & Variables
	const char rectangle = 219;
	char again;

	int n, width, padding;


	// # Input
	printf("This program builds a towerupside down!\n");
	do
	{
		printf("How wide should the tower be ?\n");
		do
		{
			printf("enter an odd number between (3 and 15)\n");
			scanf("%u%*c", &n);
		} while (n < 3 || n > 15 || n % 2 == 0);
		
		// # Logic & Output
		n++;
		for (width = n; width > 0; width -= 2)
		{
			padding = (n - width) / 2;

			for(int i = 0; i < width; i+=2)
			{
				for (int j = 0; j < padding; j++)
					printf(" ");
				for (int j = 0; j < width; j++)
					printf("%c", rectangle);
				printf("\n");
			}
		}

		// Again?
		do
		{
			printf("\nDo you want to build another tower? (y/n) ");
			scanf("%c%*c", &again);

		} while (again != 'y' && again != 'n');
	} while (again == 'y');


	// # Exit
	return 0;
}