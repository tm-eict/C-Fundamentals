#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main(void)
{
	// # Variables
	int angle;
	float a, b, c;


	// # Input
	printf("Input: ");
	scanf("%f%f%*c", &a, &b);


	// # Logic
	c = sqrt(a * a + b * b);
	// Gives another acute angle then in the book
	//angle = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / M_PI;
	angle = atan(a/b) * 180 / M_PI;


	// # Output
	printf("Output: %f\t%d", c, angle);


	// # Exit
	return 0;
}