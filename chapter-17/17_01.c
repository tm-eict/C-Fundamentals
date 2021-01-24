#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void readArray(int*, int);
void calculate(int*, int*, int*, int*);




int main(void)
{
	//stdin = fopen("input.txt", "r");
	unsigned dimension;
	int dl, dr, max, * arr = NULL;
	fprintf(stdout, "What is the matrix dimension? ");
	fscanf(stdin, "%u%*c", &dimension);

	arr = (int*)malloc(sizeof(int) * dimension * dimension);

	readArray(arr, dimension);

	calculate(arr, dimension, &dl, &dr, &max);
	free(arr);

	fprintf(stdout, "\nThe diagonal top left to bottom right sums up to %d\n", dl);
	fprintf(stdout, "The diagonal bottom left to top right sums up to %d\n", dr);
	fprintf(stdout, "The maximum number in the matrix is %d\n", dr);


	// # Exit
	return 0;
}

void calculate(int* arr, unsigned dimension, int* dl, int* dr, int* max)
{
	*dl = *max = *arr;
	for (unsigned i = dimension + 1; i < (dimension * dimension); i += dimension + 1)
		*dl += *(arr + i);

	*dr = *(arr + dimension - 1);
	for (unsigned i = 2 * dimension - 2; i < (dimension * dimension)-1; i += dimension - 1)
		*dr += *(arr + i);

	for (unsigned i = 0; i < (dimension * dimension); i++)
		if (*(arr + i) > *max)
			*max = *(arr + i);
}

void readArray(int* arr, unsigned dimension)
{
	for (unsigned i = 0; i < (dimension * dimension); i++)
		fscanf(stdin, "%d%*c", (arr + i));
}
