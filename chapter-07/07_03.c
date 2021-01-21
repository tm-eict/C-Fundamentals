#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DAYS 7


float getMean(float[]);
void getTempratures(float temperature[], int len);
void printDays(float[], int below, int len);


int main(void)
{
	// # Variables
	float temperature[DAYS];
	float mean = 0;

	// # Input
	getTempratures(temperature, DAYS);

	// # Logic & Output
	printf("The mean temperature for this week is %.2f\n", getMean(temperature, DAYS));
	printf("All days with a temperature > 10C:\n");
	printDays(temperature, 10, DAYS);


	// # Exit
	return 0;
}


float getMean(float arr[], int len)
{
	float mean = 0;

	for (int i = 0; i < len; ++i)
		mean += arr[i];
	
	return mean / len;
}

void getTempratures(float temperature[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("Enter temperature for day %d: ", i + 1);
		scanf("%f%*c", &temperature[i]);
	}
}

void printDays(float arr[], int below, int len)
{
	for (int i = 0; i < len; ++i)
		if (arr[i] > below)
			printf("Day %d\n", i + 1);
}
