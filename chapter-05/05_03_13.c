#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10

int main(void)
{
	// # Variables
	int min, max, num;

	// # Input & Logic
	printf("Enter an int: \n");
	scanf("%d%*c", &num);
	min = max = num;

	for (int i = 1;  i < MAX; i++)
	{
		printf("Enter an int: ");
		scanf("%d%*c", &num);

		if (num < min)
			min = num;
		else if (num > max)
			max = num;
	}

	// # Output
	printf("Min: %d, Max : %d\n", min, max);

	// # Exit

	return 0;
}