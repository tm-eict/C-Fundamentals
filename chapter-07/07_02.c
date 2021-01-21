#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DAYS 7

void getTempratures(float temperature[]);
void printDays(float[], int below);


int main(void)
{
	// # Variables
	float temperature[DAYS];
	float mean = 0;

	// # Input
	getTempratures(temperature);

	// # Logic & Output
	printf("All days with a temperature > 10C:\n");
	printDays(temperature, 10);


	// # Exit
	return 0;
}


void getTempratures(float temperature[])
{
	for (int i = 0; i < DAYS; ++i)
	{
		printf("Enter temperature for day %d: ", i + 1);
		scanf("%f%*c", &temperature[i]);
	}
}

void printDays(float arr[], int below)
{
	for (int i = 0; i < DAYS; ++i)
		if (arr[i] > below)
			printf("Day %d\n", i + 1);
	
}
