#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variabels
	int num, multiplication;

	// # Input
	printf("Enter an integer number: ");
	scanf("%d%*c", &num);

	// # Logic & Ouput
	printf("The table of multiplication of 7 is:\n");
	for (int i = 1; i < 21; i++)
	{
		multiplication = num * i;
		printf("%d x %d = %d\n", i, num, multiplication);
	}
	

	// # Exit
	return 0;
}