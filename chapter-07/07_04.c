#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DAYS 7

void calculate(float[]);
float getMean(float[], int);
void getTempratures(float temperature[], int);
void printDays(float[], int);



int main(void)
{
	// # Variables
	float temperature[DAYS];
	float belowArr[DAYS];
	float mean = 0;


	// # Input
	getTempratures(temperature, DAYS);


	// # Logic & Output
	calculate(temperature, belowArr, 10, DAYS);
	printf("The mean temperature for this week is %.2f\n", getMean(temperature, DAYS));
	printf("All days with a temperature > 10C:\n");
	printDays(belowArr, DAYS);


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

void calculate(float a[], float b[],int max, int len)
{
	for (int i = 0; i < len; ++i)
		if (a[i] > max)
			b[i] = 1;
		else
			b[i] = 0;
}

void getTempratures(float temperature[], int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("Enter temperature for day %d: ", i + 1);
		scanf("%f%*c", &temperature[i]);
	}
}

void printDays(float arr[], int len)
{
	for (int i = 0; i < len; ++i)
		if (arr[i] == 1)
			printf("day %d\n", i + 1);

}
