#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TIMES 10

int main(void)
{
	// # Variables
	int num, sum, i;
	sum = 0;

	// # Logic
	for (i = 0; i < TIMES; i++)
	{
		printf("Enter an integer number: ");
		scanf("%d%*c", &num);
		sum += num;
	}

	printf("Sum: %d, Mean %f\n", sum, (float)sum / TIMES);

	// # Exit
	return 0;
}