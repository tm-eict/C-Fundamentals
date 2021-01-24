#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void fillArray(int*, int, int);
void calculate(int*, int, int);


int main(void)
{

	unsigned rows, columns;
	int dl, dr, max, * arr = NULL;

	fprintf(stdout, "Enter the number of rows and columns for the matrix ?");
	fscanf(stdin, "%u%*c%u%*c", &rows, &columns);

	arr = (int*)malloc(sizeof(int) * rows * columns);

	fillArray(arr, rows, columns);

	fputs("\n", stdout);
	for (unsigned i = 0; i < rows * columns;)
	{
		printf("%2d ", *(arr + i));
		if (++i % columns == 0)
			fputs("\n", stdout);
	}
	free(arr);


	// # Exit
	return 0;
}

void fillArray(int* arr, unsigned row, unsigned column)
{
	for (unsigned i = 0; i < (row * column); i++)
		*(arr + i) = ((i / column) + 1) * ((i % column) + 1);
}
