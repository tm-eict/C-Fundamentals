#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 100

int CalcMax(int row[], int size);
double CalcMean(int row[], int size);
int ReadArray(int[]);
void PrintArray(int[], int);

int main(void)
{
	// # Variables
	int row[MAX];
	int size;

	// # Input
	size = ReadArray(row);

	// # Output
	PrintArray(row, size);
	printf("Mean = %lf\n", CalcMean(row, size));
	printf("Max = %d\n", CalcMax(row, size));

	// # Exit
	return 0;
}

int CalcMax(int row[], int size)
{
	int max = row[0];
	for (int i = 1; i < size; ++i)
		if (max < row[i])
			max = row[i];

	return max;
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

	while (tmp != 999 && i <= MAX)
	{
		arr[i] = tmp;
		i++;
		printf("Enter a int: ");
		scanf("%d%*c", &tmp);
	}

	return i;
}

void PrintArray(int arr[], int size)
{
	printf("%d", arr[0]);
	for (int i = 1; i < size; ++i)
		printf(", %d", arr[i]);
	printf("\n");
}
