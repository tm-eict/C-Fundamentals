#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX2(a, b) ((a) < (b) ? (b) : (a))
#define MAX3(a, b, c) MAX2(MAX2((a), (b)),(c))


int main(void)
{
	int a, b, c;

	do
	{
		printf("Enter 3 int's: ");
		scanf("%d%*c%d%*c%d%*c", &a, &b, &c);
		printf("The minimum of %d, %d and %d = %d\n", a, b, c, MAX3(a, b, c));
	} while (a);


	// # Exit
	return 0;
}