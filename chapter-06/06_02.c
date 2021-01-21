#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

#define STEP 30


int main(void)
{

	// # Logic & Ouput
	printf("Angle | Sine\n");
	// NOTE: 0 degrees == 360 degrees
	for (int angle = 0; angle < 360; angle += STEP) 
		printf("  %-3d | %-1.6lf\n", angle, sin(angle * M_PI / 180));


	// # Exit
	return 0;
}