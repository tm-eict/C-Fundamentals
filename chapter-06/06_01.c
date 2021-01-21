#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main(void)
{
	// # Variables
	double angle;


	// # Input
	printf("Give an angle (in degrees): ");
	scanf("%lf%*c", &angle);


	// # Output & Logic
	printf("The corresponding sine of %lg degrees is %lf", angle, sin(angle*M_PI/180));


	// # Exit
	return 0;
}