#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STEP 0.5

float y(float);

int main(void)
{
	// # Logic & Output
	for (float x = -5; x < 5; x += STEP) 
		printf("y(%g)\t | =%g\n", x, y(x));
	

	// # Exit
	return 0;
}

float y(float x)
{
	return 2 * (x * x) + 2 * x - 3;
}


