#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 10
#define LENGTH 20

void bubbleSort(char[][LENGTH], int);
void printArray(char[][LENGTH], int);
void read(char[][LENGTH], int);
void swapStr(char**, char**);

int main(void)
{
	// # Variables
	char arr[SIZE][LENGTH];

	// # Input
	printf("Enter %d strings\n", SIZE);
	read(arr, SIZE);
	puts("");

	// # Logic
	bubbleSort(arr, SIZE);

	// # Ouput
	printArray(arr, SIZE);

	// # Exit
	return 0;
}


void bubbleSort(char a[][LENGTH], int n)
{
	unsigned char swapped;
	char* previousElement = NULL;

	do
	{
		previousElement = a;
		swapped = 0;

		for (int i = 1; i < n; i++, previousElement++)
		{
			if (strcmp(a[i], previousElement) < 0)
			{
				swapStr(a[i], previousElement);
				swapped = 1;
			}
		}

		n--;
	} while (swapped);
}

void printArray1(char a[][LENGTH], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s\n", a[i]);
}

void printArray(char a[][LENGTH], int n)
{
	for (int i = 0; i < n; i++, a++)
		printf("%s\n", *a);
}

void read(char a[][LENGTH], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("String %d: ", i + 1);
		gets(a[i]);
	}
}

void swapStr(char **a, char **b)
{
	char *tmp = *a;
	*a = *b;
	*b = tmp;
}
