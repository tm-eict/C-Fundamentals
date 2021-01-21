#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#define RAND_MAX 32767
#define POINTS 100000


int main(void)
{
	// # Variable
	float x, y, count;
	count = 0;

	// # Setup
	srand(time(NULL));

	// # Logic
	for (int i = 0; i < POINTS; ++i) {
		x = (float)rand() / RAND_MAX;
		y = (float)rand() / RAND_MAX;

		if (x * x + y * y < 1)
			count++;
	}
	count /= POINTS;

	printf("PI/4=%lf\n", M_PI_4);
	printf("Estimation: %f\n", count);


	// # Exit
	return 0;
}