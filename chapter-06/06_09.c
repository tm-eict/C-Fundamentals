#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readnumber(int lower_boundary, int upper_boundary);

int main(void)
{
	// # Variables
	int number;

	// # Input
	number = readnumber(0, 10);

	// # Output
	printf("The number read is % d\n", number);


	// # Exit
	return 0;
}

int readnumber(int lower_boundary, int upper_boundary)
{
	int n;

	do
	{
		printf("Enter a number in the interval [%d , %d]: ", lower_boundary, upper_boundary);
		scanf("%d*c", &n);
	} while (lower_boundary <= n && n >= upper_boundary);

	return n;
}
