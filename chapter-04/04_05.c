#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	int num1, num2, iquotient, remainder;
	float fquotient;


	// Input
	printf("Enter 2 integers: ");
	scanf("%d%d%*c", &num1, &num2);

	// Logic

	iquotient = num1 / num2;
	remainder = num1 % num2;
	fquotient = (float)num1 / num2;

	// Output
	printf(
		"integer quotient = %d\n"
		"remainder = %d\n"
		"quotient = %.2f", iquotient, remainder, fquotient);


	// Exit
	return 0;
}