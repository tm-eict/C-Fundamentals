#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Variabels
	unsigned int factorial;
	int n;
	factorial = 1;


	// # Input
	printf("Enter a natural number: ");
	scanf("%d%*c", &n);

	while (n < 0)
	{
		printf("Only for positive numbers\n");
		scanf("%d%*c", &n);
	}


	// # Logic
	printf("%d! = ", n);
	if (n == 0)
		printf("1\n");
	else
	{
		for (; n > 1; n--)
		{
			factorial *= n;
			printf("%d x ", n);

		}
		n--;
		printf("%d = %u", n, factorial);
	}


	// # Exit
	return 0;
}