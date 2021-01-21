#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variabels
	int n;

	// # Input
	printf("Enter an integer number: ");
	scanf("%d%*c", &n);

	// # Logic & Ouput
	for (int i = 1; i < n; i++)
		printf("%d+", i);
	printf("%d\n", n);


	// # Exit
	return 0;
}