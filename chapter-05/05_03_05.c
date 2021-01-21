#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variabels
	int limit, num;

	// # Logic
	printf("Enter the limit: ");
	scanf("%d%*c", &limit);

	do
	{
		printf("Enter an integer number: ");
		scanf("%d%*c", &num);

		limit -= num;
	} while (limit > 0);
	printf("The limit of 15 is reached or exceeded!");


	// # Exit
	return 0;
}