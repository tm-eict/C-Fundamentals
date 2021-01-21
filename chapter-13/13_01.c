#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MIN(a,b) ((a) < (b) ? (a) : (b))


int main(void)
{
	int a, b;

	do
	{
		printf("Enter 2 int's: ");
		scanf("%d%*c%d%*c", &a, &b);
		printf("The minimum of %d and %d = %d\n", a, b, MIN(a, b));
	} while (a | b);



	// # Exit
	return 0;
}