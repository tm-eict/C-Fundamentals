#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	float num1, num2, num3, num4, num5, num6;


	// Input
	printf("Enter 6 integer numbers: ");
	scanf("%f%f%f%f%f%f%*c", &num1, &num2, &num3, &num4, &num5, &num6);


	// Output
	printf(
		"---------------------------------------\n"
		"| %16.8f | %16.8f |\n"
		"---------------------------------------\n"
		"| %16.8f | %16.8f |\n"
		"---------------------------------------\n"
		"| %16.8f | %16.8f |\n"
		"---------------------------------------\n", num1, num2, num3, num4, num5, num6);


	// Exit
	return 0;
}