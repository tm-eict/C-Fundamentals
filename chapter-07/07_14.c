#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 20


void ReadArray(int[], int);
void shift(int[], int, int, int);


int main(void)
{
	// # Variables
	int arr[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19 };
	int counter[SIZE];



	// # Input
	printf("Enter a list of 20 numbers: ");
	ReadArray(arr, SIZE);

	// # Logic


	// # Exit
	return 0;
}


void ReadArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		scanf("%d%*c", arr[i]);

}

void shift(int arr[], int from, int to, int positions)
{
	for (int i = from; i < to, ++i)
	{
		printf("%d\n", arr[i]);
	}
}
