#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100

double CalcMean(int row[], int size);
int ReadArray(int[]);
void SwapExtreme(int row[], int size);
void PrintArray(int[], int);

int main(void)
{
	// # Variables
	int row[MAX];
	int size;

	// # Input
	size = ReadArray(row);

	// # Output
	//PrintArray(row, size);
	SwapExtreme(row, size);
	printf("Mean = %lf\n", CalcMean(row, size));


	// # Exit
	return 0;
}


double CalcMean(int row[], int size)
{
	double mean = 0;
	for (int i = 0; i < size; ++i)
		mean += row[i];

	return mean / size;
}

int ReadArray(int arr[])
{
	int i, tmp;

	i = 0;
	printf("Enter a int: ");
	scanf("%d%*c", &tmp);

	// Maybe i<MAX
	while (tmp != 999 && i <= MAX)
	{

		arr[i] = tmp;
		i++;
		printf("Enter a int: ");
		scanf("%d%*c", &tmp);
	}

	return i;
}

void SwapExtreme(int row[], int size)
{
	int max, min, maxp, minp, tmp;

	maxp = minp = 0;
	max = min = row[0];

	for (int i = 1; i < size; ++i)
	{
		if (max < row[i])
		{
			maxp = i;
			max = row[i];
		}
		else if (min > row[i])
		{
			minp = i;
			min = row[i];
		}
	}

	row[minp] = max;
	row[maxp] = min;
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d\n", arr[i]);
}
