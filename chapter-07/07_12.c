#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

void getIntArray(int arr[], int size);

int main(void)
{
	// # Variables
	int a, b;
	int arr1[SIZE], arr2[SIZE];
	int arr3[SIZE * 2];

	
	// # Input
	printf("Enter ordered row: ");
	getIntArray(arr1, SIZE);
	printf("Enter ordered row: ");
	getIntArray(arr2, SIZE);

	// # Logic
	a = b = 0;
	for (int i = 0; i < SIZE * 2; i++)
	{
		if (b < SIZE && arr1[a] > arr2[b] || !(a < SIZE))
		{
			arr3[i] = arr2[b];
			b++;
		} 
		else {
			arr3[i] = arr1[a];
			a++;
		}
	}

	// Ouput
	printf("The merged row is: ");
	for (int i = 0; i < SIZE * 2; i++)
		printf("%d ", arr3[i]);
	printf("\n");

	// # Exit
	return 0;
}

void getIntArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		scanf("%d%*c", &arr[i]);
}
