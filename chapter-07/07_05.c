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

	// # Output
	PrintMatrix(a, MAX, COLUMNS);

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

	for (int i = 0; i < size; ++i)
	{
		if (i % columns == 0)
			printf("\n");
		printf("%-10d", arr[i]);
		
	}
}
