#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define COLUMN 10
#define ROW 3

void ReadRow(int[], int);
void Calculate(int[][COLUMN], int, int);
void PrintMatrix(int[][COLUMN], int, int);


int main(void)
{

	// # Variables
	int arr[ROW][COLUMN];

	// # Input
	printf("Enter %d x %d integers:\n", ROW - 1, COLUMN);
	for (int i = 0; i < ROW - 1; i++)
		ReadRow(arr[i], COLUMN);

	// # Logic
	Calculate(arr, ROW, COLUMN);

	// # Output
	printf("\nTable:\n");
	PrintMatrix(arr, ROW, COLUMN);



	// # Exit
	return 0;
}

void ReadRow(int arr[], int column)
{
	for (int i = 0; i < column; i++)
		scanf("%d%*c", &arr[i]);
}

void Calculate(int arr[][COLUMN], int row, int column)
{
	int sum = 0;
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row - 1; j++)
			sum += arr[j][i];

		arr[row - 1][i] = sum;
		sum = 0;
	}


}

void PrintMatrix(int arr[][COLUMN], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("%-4d", arr[i][j]);
		}
		printf("\n");
	}
}

