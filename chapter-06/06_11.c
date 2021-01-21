#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int gcd(int number1, int number2);


int main(void)
{
	// # Variables
	int greatestcommondivider, num1, num2, num3;


	// # Input
	printf("Give 3 (int)numbers: ");
	scanf("%d%d%d%*c", &num1, &num2, &num3);


	// # Logic
	greatestcommondivider = gcd(num1, gcd(num2, num3));


	// # Ouput
	printf("The gcd is %d\n", greatestcommondivider);


	// # Exit
	return 0;
}


int gcd(int number1, int number2)
{
	int gcd = 1;

	for (int i = 1; i <= number1 && i <= number2; ++i)
		if (number1 % i == 0 && number2 % i == 0)
			gcd = i;

	return gcd;
}
