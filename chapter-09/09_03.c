#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int ReadRow(int[], int);
void f1(int[][SIZE], int);
void f2(int[][SIZE], int);

int main(void)
{
	// # Variables
	int arr[2][SIZE];
	int size;


	// # Input
	printf("Enter a list of integers (end with 999):\n");
	size = ReadRow(arr[0], SIZE);

	// # Logic
	f1(arr, size);

	// # Output
	f2(arr, size);



	// # Exit
	return 0;
}

int ReadRow(int arr[], int column)
{
	int tmp, i;

	i = 0;

	scanf("%d%*c", &tmp);
	while (tmp != 999 && i < column)
	{
		arr[i] = tmp;
		scanf("%d%*c", &tmp);
		i++;
	}
	return i;
}

void f1(int arr[][SIZE], int size)
{
	int num, count;

	for (int i = 0; i < size; i++)
	{
		num = arr[0][i];

		if (num != 999)
		{
			count = 1;
			
			for (int j = i+1; j < size; j++)
			{
				if (num == arr[0][j])
				{
					arr[0][j] = 999;
					count++;
				}
			}
			arr[1][i] = count;
		}
	}
}

void f2(int arr[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr [0][i] != 999)
		{
			printf("%-3d\t%-3d\n", arr[0][i], arr[1][i]);
		}
	}
}
