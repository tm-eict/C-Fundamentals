#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int*, int*);
void read(int*, int*);
void calcPrint(int, int);

int main(void)
{
	// # Variables
	int a, b;


	// Input
	read(&a, &b);


	// # Logic
	swap(&a, &b);


	// # Ouput
	calcPrint(a, b);

	// # Exit
	return 0;
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

