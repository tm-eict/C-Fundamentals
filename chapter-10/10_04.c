#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void bubbleSort(int[], int);
int insertIndex(int[], int, int);
void printArray(int[], int);
int read(int[], int);
void shiftArr(int[], int, int);
void swapInt(int*, int*);

int main(void)
{
	// # Variables
	int arr[SIZE], last, err, insertIdx;


	// # Input
	printf("Enter %d ints: ", SIZE - 1);
	err = read(arr, SIZE - 1);
	if (err)
	{
		printf("You didn't enter the integers in ascending order, int %d was out of place.\n", err + 1);
		return -1;
	}

	printf("Enter the last int: ");
	scanf("%d%*c", &last);


	// # Logic
	/*
	// Don't think this is how we need to solve it
	arr[SIZE - 1] = last;
	bubbleSort(arr, SIZE);
	*/
	insertIdx = insertIndex(arr, last, SIZE - 1);
	shiftArr(&arr[insertIdx], 1, SIZE - insertIdx);	// &arr[insertIdx] == arr + insertIdx
	arr[insertIdx] = last;


	// # Ouput
	printArray(arr, SIZE);


	// # Exit
	return 0;
}


void bubbleSort(int a[], int n)
{
	unsigned char swapped;
	int *previousElement = NULL;

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

int insertIndex(int a[], int b, int n)
{
	int ret = -1;

	for (int i = 0; i < n && ret == -1; i++)
		if (a[i] > b)
			ret = i;

	return ret;
}

void printArray(int a[], int n)
{

	printf("%d", *a);
	for (n--; n; n--)
		printf(", %d", *++a);

	puts("");
}

int read(int a[], int n)
{
	int ret = 0;
	int *previousElement = NULL;

	scanf("%d%*c", a);
	previousElement = a++;

	for (int i = 1; i < n && !ret; i++, a++) {
		scanf("%d%*c", a);
		if (*a < *previousElement)
			ret = i;
		previousElement = a;
	}

	return ret;
}

void shiftArr(int a[], int shift, int len)
{
	for (int i = len - 1; i >= 0; i--)
		a[i + shift] = a[i];
}

void swapInt(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}