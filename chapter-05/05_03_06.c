#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// # Constant & Variables
	float min = -2;
	float max = 4.5;
	float num;
	

	// # Logic
	do
	{
		printf("Enter a (float)number in the interval [%g, %g[: ", min, max);
		scanf("%f%*c", &num);
	} while (!(min <= num && num < max));
	printf("Correct number: %f", num);


	// # Exit
	return 0;
}