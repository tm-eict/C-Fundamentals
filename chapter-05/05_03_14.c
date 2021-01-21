#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int min, max, num, pmin, pmax;
	
	pmin = pmax = 1;

	// # Input & Logic
	printf("Enter an int: ");
	scanf("%d%*c", &num);
	min = max = num;

	for (int i = 1; i < 10; i++)
	{
		printf("Enter an 10 ints: ");
		scanf("%d%*c", &num);

		if (num < min)
		{
			min = num;
			pmin = i + 1;
		}
		else if (num > max)
		{
			max = num;
			pmax = i + 1;
		}
	}


	// # Output
	printf("\nMin: %d with place %d, Max : %d with place %d\n", min, pmin, max, pmax);


	// # Exit
	return 0;
}