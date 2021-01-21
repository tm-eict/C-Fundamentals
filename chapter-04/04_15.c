#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Variables
	int num1, num2, num3, num4, num5, num6;


	// Input
	printf("Enter 6 integer numbers: ");
	scanf("%d%d%d%d%d%d%*c", &num1, &num2, &num3, &num4, &num5, &num6);


	// Ouput
	printf(
		"%3d \t %3d\n"
		"%3d \t %3d\n"
		"%3d \t %3d\n", num1, num2, num3, num4, num5, num6);


	// Exit
	return 0;
}
