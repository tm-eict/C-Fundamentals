#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float num;


	// # Input
	printf("condition A: 3 <= x < 8.5\n"
		"condition B: x < 3 OR 5.4 < x <= 7.3 OR x > 13\n"
		"condition C: x != 3 AND x < 9.75\n"
		"Enter (float)x: \n");
	scanf("%f%*c", &num);


	// # Output
	printf("%.5f matches conditions: ");

	// Condition A
	if (3 <= num && num < 8.5)
		printf("A,");
	else
		printf("not A,");

	// Condition B
	if (num < 3 || (5.4 < num && num <= 7.3) || num > 13)
		printf("B,");
	else
		printf("not B,");

	// Condition C
	if (num != 3 && num < 9.75)
		printf("C\n");
	else
		printf("not C\n");


	// # Exit
	return 0;
}