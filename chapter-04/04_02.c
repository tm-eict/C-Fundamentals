#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main(void)
{
	// Variables
	int num;


	// Input
	printf("Enter a integer: ");
	scanf("%d%*c", &num);


	// Output
	printf("\nYou entered: %d, the max value is %d\n", num, INT_MAX);


	// Exit
	return 0;
}