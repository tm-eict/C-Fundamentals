#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	int num1, num2;


	// Input
	printf("Enter 2 integers: ");
	scanf("%d%d%*c", &num1, &num2);


	// Output
	printf("The entered numbers are %d and %d\n", num1, num2);


	// Exit
	return 0;
}