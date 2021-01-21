#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void FillMatrix(int [][SIZE], int);
void PrintMatrix(int [][SIZE], int);

int main(void)
{
	// # Variables
	int arr[SIZE][SIZE];

	// Logic
	FillMatrix(arr, SIZE);

	// # Output
	PrintMatrix(arr, SIZE);



	// # Exit
	return 0;
}

void FillMatrix(int arr[][SIZE], int size)
{
	// TODO: Use pointer
	for (int i = 1; i <= size; i++)
		for (int j = 1; j <= size; j++)
			arr[i - 1][j - 1] = j * i;

}

void PrintMatrix(int arr[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("%-5d", arr[i][j]);
		printf("\n");
	}
}
