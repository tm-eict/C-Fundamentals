#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void read(int[], int);
int findSmallestIndex(int[], int, int);
void swapFirstAndSmallest(int[], int);
void swapInt(int*, int*);
void printArray(int[], int);

int main(void)
{
	// Variables
	int arr[SIZE];

	// # Input
	printf("Enter 10 ints: ");
	read(arr, SIZE);

	// # Logic
	swapFirstAndSmallest(arr, SIZE);

	// # Output
	printArray(arr, SIZE);


	// # Exit
	return 0;
}

void read(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		scanf("%d%*c", &arr[i]);
}


int findSmallestIndex(int a[], int n, int start)
{
	int i, index_s;

	index_s = start;

	for (i = start + 1; i < n; ++i)
		if (a[i] < a[index_s])
			index_s = i;
	
	return index_s;
}

void swapFirstAndSmallest(int a[], int n)
{
	int smallestIndex;

	smallestIndex = findSmallestIndex(a, n, 0);

	swapInt(&a[0], &a[smallestIndex]);
}

void swapInt(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void printArray(int a[], int n)
{
	printf("%d", a[0]);

	if (n > 1)
		for (int i = 1; i < n; i++)
			printf(", %d", a[i]);
}
