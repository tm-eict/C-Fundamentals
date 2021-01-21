#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main(void)
{
	// # variables
	int num;


	// # Input
	printf("Enter an (int)number: ");
	scanf("%d%*c", &num);

	
	// # Ouput & Logic
	printf("The sqrt of %d is %-6lg", num, sqrt(num));


	// # Exit
	return 0;
}