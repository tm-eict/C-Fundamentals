#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


double exponentiation(double base, int exponent);


int main(void)
{
	// # Variables
	int exponent;
	double base, result;


	// # Input
	printf("Base: ");
	scanf("%lf%*c", &base);

	printf("exponent: ");
	scanf("%d%*c", &exponent);


	// # Logic
	result = exponentiation(base, exponent);


	// # Output
	printf("The result is: %lg\n", result);


	// # Exit
	return 0;
}

double exponentiation(double base, int exponent)
{
	double ret = 1;

	if (exponent == 0)
		ret = 1;
	else if (exponent < 0)
	{
		exponent = -exponent;
		for (; exponent; --exponent)
			ret *= base;
		ret = 1 / ret;
	}
	else
		for (; exponent; --exponent)
			ret *= base;


	return ret;
}
