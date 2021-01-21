#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	float num1, num2, quotient;


	// Input
	printf("Enter 2 floats: ");
	scanf("%f%f%*c", &num1, &num2);


	// Logic
	quotient = num1 / num2;


	// Output
	printf("quotient = %.20f", quotient);


	// Exit
	return 0;
}