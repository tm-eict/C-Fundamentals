#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	float num1, num2, sum, product;


	// Input
	printf("Enter 2 integers: ");
	scanf("%f%f%*c", &num1, &num2);

	// Logic
	sum = num1 + num2;
	product = num1 * num2;

	// Output
	printf("The sum and product of %f and %f are %f and %f\n", num1, num2, sum, product);


	// Exit
	return 0;
}