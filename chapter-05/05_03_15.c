#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int num1, num2, gcd;


	// # Input
	printf("Enter two ints: ");
	scanf("%d%d%*c", &num1, &num2);


	// # Logic
	for (int i = 1; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;


	// # Output
	printf("\ngcd: %d\n", gcd);


	// # Exit
	return 0;
}