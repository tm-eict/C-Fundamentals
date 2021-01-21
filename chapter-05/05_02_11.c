#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variables
	int a, b, c, temp;

	// # Input
	printf("Enter 3 (int)numbers: ");
	scanf("%d%d%d%*c", &a, &b, &c);


	// # Logic
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}


	// # Output
	printf("%d %d %d\n", a, b, c);


	// # Exit
	return 0;
}