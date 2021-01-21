#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float base, total, exponent;
	total = 1;


	// # Input
	printf("(float)base: ");
	scanf("%f%*c", &base);

	printf("(float)Exponent: ");
	scanf("%f%*c", &exponent);


	// # Logic
	if (exponent == 0)
		total = 1;
	else if (exponent < 0)
	{
		exponent = -exponent;
		for (; exponent > 0; exponent--)
			total *= base;
		total = 1 / total;
	}
	else
	{
		for (; exponent > 0; exponent--)
			total *= base;
	}


	// # Ouput
	printf("\n= %f\n", total);


	// # Exit
	return 0;
}