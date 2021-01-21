#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int readnumber(void);

int main(void)
{
	// # Variables
	int number;

	// # Input
	number = readnumber();

	// # Output
	printf("The number read is % d\n", number);


	// # Exit
	return 0;
}

int readnumber(void)
{
	int n;

	do
	{
		printf("Enter a number in the interval [0 , 10]: ");
		scanf("%d*c", &n);
	} while (0 <= n && n >= 10);

	return n;
}
