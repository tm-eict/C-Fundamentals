#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX 100


int ReadSize(int min, int max);
void ReadArray(int[], int);
void PrintArray(int[], int);


int main(void)
{
	// # Variables
	int row[MAX];
	int size;

	// # Input
	size = ReadSize(0, MAX);
	ReadArray(row, size);

	// # Output
	PrintArray(row, size);


	// # Exit
	return 0;
}


int ReadSize(int min, int max)
{
	int ret;

	do
	{
		printf("Enter a int in [%d, %d]", min, max);
		scanf("%d%*c", &ret);
	} while (min <= ret && ret <= max);

	return ret;
}

void ReadArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		arr[i] = ReadSize(-32767, 32767);
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d\n", arr[i]);
}
