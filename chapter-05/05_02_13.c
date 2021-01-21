#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float number1, number2, result;
	char operator;


	// # Input
	printf("Enter an expression (without spaces!): ");
	scanf("%f%c%f%*c", &number1, &operator, &number2);


	// # Logic
	switch (operator)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;
	default:
		printf("Unknown operator.");
		return 1;
		break;
	}


	// # Ouput
	printf("%g %c %g = %g\n", number1, operator, number2, result);


	// # Exit
	return 0;
}