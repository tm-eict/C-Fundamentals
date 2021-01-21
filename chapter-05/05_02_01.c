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
	printf("%d is %spositive.\n", num, num > 0 ? "" : "not ");
	

	// # Exit
	return 0;
}