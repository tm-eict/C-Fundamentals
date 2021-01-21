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
	printf("%.5f is ");
	if (num == 0)
		printf("zero\n");
	else
		printf(num < 0 ? "negative\n" : "positive\n");


	// # Exit
	return 0;
}