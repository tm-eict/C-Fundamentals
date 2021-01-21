#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int num;


	// # Input
	printf("Enter an int: ");
	scanf("%d%*c", &num);


	// # Output
	printf("%d is %s.\n", num, num % 2 ? "odd" : "even");


	// # Exit
	return 0;
}