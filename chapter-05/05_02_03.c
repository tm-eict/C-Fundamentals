#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	float num;


	// # Input
	printf("Enter an float: ");
	scanf("%f%*c", &num);


	// # Output
	if (num <= 5 && num < 10)
		printf("%.5f is in [5,10[.\n", num);
	else
		printf("%.5f is not in [5,10[.\n", num);


	// # Exit
	return 0;
}