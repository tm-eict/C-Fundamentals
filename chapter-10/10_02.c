#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void bubbleSort(int[], int);
void printArray(int[], int);
void read(int[], int);
void swapInt(int*, int*);

int main(void)
{
	// # Variables
	int arr[SIZE];

	// # Input
	printf("Enter %d ints: ", SIZE);
	read(arr, SIZE);

	// # Logic
	bubbleSort(arr, SIZE);

	printArray(arr, SIZE);


	// # Exit
	return 0;
}


void bubbleSort(int a[], int n)
{
	unsigned char swapped;
	int* previousElement = NULL;

	do
	{
		previousElement = a;
		swapped = 0;

		for (int i = 1; i < n; i++, previousElement++)
		{
			if (a[i] < *previousElement)
			{
				swapInt(&a[i], previousElement);
				swapped = 1;
			}
		}

		n--;
	} while (swapped);
}

void printArray(int a[], int n)
{
	printf("%d", a[0]);

	if (n > 1)
		for (int i = 1; i < n; i++)
			printf(", %d", a[i]);
}

void read(int a[], int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d%*c", &a[i]);
}

void swapInt(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}