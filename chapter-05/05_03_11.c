#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float base, total;
	int exponent;
	total = 1;


	// # Input
	printf("(base)Exponent: ");
	scanf("%f%*c", &base);

	printf("(int)Exponent: ");
	scanf("%d%*c", &exponent);
	

	// # Logic
	for (; exponent > 0; exponent--)
	{
		total *= base;
	}


	// # Ouput
	printf("\n= %f\n", total);


	// # Exit
	return 0;
}