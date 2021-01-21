#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DAYS 7


int main(void)
{
	// # Variables
	float temperature[DAYS];
	float mean = 0;

	// # Input
	for (int i = 0; i < DAYS; ++i)
	{
		printf("Enter temperature for day %d: ", i + 1);
		scanf("%f%*c", &temperature[i]);
		mean += temperature[i];
	}

	// # Logic
	mean /= DAYS;

	// # Output
	printf("The mean temperature for this week is %.2f\n", mean);



	// # Exit
	return 0;
}