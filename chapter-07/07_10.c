#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX 100


double CalcMean(int row[], int size);
int ReadArray(int[], int);
void PrintArray(int[], int);


int main(void)
{
	// # Variables
	int row[MAX];
	int size;


	// # Input
	size = ReadArray(row, MAX);


	// # Output
	//PrintArray(row, size);
	printf("Mean = %lf\n", CalcMean(row, size));


	// # Exit
	return 0;
}


double CalcMean(int row[], int size)
{
	double mean = 0;

	for (int i = 0; i < size; ++i)
		mean += row[i];
	
	return mean / size;
}

int ReadArray(int arr[], int size)
{
	int i, tmp;

	i = 0;
	printf("Enter a int: ");
	scanf("%d%*c", &tmp);

	// Maybe i<MAX
	while (tmp != 999 && i <= size)
	{
		arr[i] = tmp;
		i++;
		printf("Enter a int: ");
		scanf("%d%*c", &tmp);
	}

	return i;
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d\n", arr[i]);
}
