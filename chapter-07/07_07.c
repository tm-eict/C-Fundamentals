#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 6031 )
#include <stdio.h>


#define MAX 12
#define COLUMNS 3


void ReadArray(int[], int);
void PrintMatrix(int[], int, int);


int main(void)
{
	// # Variables
	int a[MAX];

	// # Input
	ReadArray(a, MAX);
	puts("\n");
	// # Output
	PrintMatrix(a, MAX, COLUMNS); return 0;

	// # Exit
	return 0;
}


void ReadArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("Value %d: ", i + 1);
		scanf("%d%*c", &arr[i]);
	}
}

void PrintMatrix(int arr[], int size, int columns)
{
	int sumRow = 0;
	int sumColumn[COLUMNS];

	// Set all elements to 0 (needed for +=)
	memset(sumColumn, 0, sizeof(sumColumn));

	for (int i = 0; i < size; i++)
	{
		if (i % columns == 0 && i)
		{
			printf("|%-10d\n", sumRow);
			sumRow = 0;
		}
		printf("%-10d", arr[i]);
		sumColumn[i%columns] += arr[i];
		sumRow += arr[i];
	}
	printf("\n");
	for (int i = 0; i < columns; ++i)
		printf("%-10d", sumColumn[i]);
	printf("\n");
}
